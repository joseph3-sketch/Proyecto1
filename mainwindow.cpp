#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Configuración de columnas para la tabla 'mostarLista'
    ui->mostarLista->setColumnCount(2);
    ui->mostarLista->setHorizontalHeaderLabels({"Nombre", "Promedio"});
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_AgregarButton_clicked() {
    // 1. Capturar datos usando los nombres de tu XML
    QString nombre = ui->nombreAgregar->text();
    float j = ui->jugabilidadAgregar->text().toFloat();
    float h = ui->historiaAgregar->text().toFloat();
    float g = ui->graficosAgregar->text().toFloat();

    // 2. Validación simple (Rango 0-5)
    if (nombre.isEmpty() || h < 0 || h > 10 || g < 0 || g > 10 || j < 0 || j > 10) {
        ui->label_7->setText("Error: Datos inválidos");
        return;
    }

    // 3. Agregar al QVector usando el struct
    listaJuegos.append({nombre, j, h, g});

   // 6. Actualizar la tabla y limpiar campos
    mostrarDatos();
    ui->nombreAgregar->clear();
    ui->jugabilidadAgregar->clear();
    ui->historiaAgregar->clear();
    ui->graficosAgregar->clear();
}

void MainWindow::mostrarDatos() {
    // Limpiar tabla
    ui->mostarLista->setRowCount(0);

    for (int i = 0; i < listaJuegos.size(); i++) {
        ui->mostarLista->insertRow(i);

        float prom = (listaJuegos[i].historia + listaJuegos[i].grafico + listaJuegos[i].jugabilidad) / 3.0f;

        // Llenar celdas de la fila 'i'
        ui->mostarLista->setItem(i, 0, new QTableWidgetItem(listaJuegos[i].nombre));
        ui->mostarLista->setItem(i, 1, new QTableWidgetItem(QString::number(prom, 'f', 2)));
    }
}

void MainWindow::on_mostarLista_cellClicked(int row, int column) {
    if (row >= 0 && row < listaJuegos.size()) {
        // Cargar datos de la fila seleccionada a los QLineEdit
        ui->nombreAgregar->setText(listaJuegos[row].nombre);
        ui->jugabilidadAgregar->setText(QString::number(listaJuegos[row].jugabilidad));
        ui->historiaAgregar->setText(QString::number(listaJuegos[row].historia));
        ui->graficosAgregar->setText(QString::number(listaJuegos[row].grafico));
    }
}
// validar la calificacion maxima nota = 5

