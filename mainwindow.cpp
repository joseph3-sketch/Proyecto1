#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "fstream"
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->mostarLista->setColumnCount(2);
    ui->mostarLista->setHorizontalHeaderLabels({"Nombre", "Promedio"});
}

MainWindow::~MainWindow() {
    delete ui;
}
void MainWindow::on_AgregarButton_clicked() {
    QString nombre = ui->nombreAgregar->text();
    float j = ui->jugabilidadAgregar->text().toFloat();
    float h = ui->historiaAgregar->text().toFloat();
    float g = ui->graficosAgregar->text().toFloat();

    if (nombre.isEmpty() or h <0 or h >10 or g <0 or g >10 or j <0 or j >10) {
        ui->label_7->setText("Error: Datos inválidos");
        return;
    }

    listaJuegos.append({nombre, j, h, g});
    mostrarDatos();
    ui->nombreAgregar->clear();
    ui->jugabilidadAgregar->clear();
    ui->historiaAgregar->clear();
    ui->graficosAgregar->clear();

    ofstream archivo("C:/Users/grego/Documents/Proyecto1-MODIFICACION/archivo.txt", ios::app); // PONEMOS LA RUTA POR EL MOMENTO (MOTIVOS LOCALIZAR EL ARCHIVO RAPIDAMENTE)

    for (int i = 0; i <listaJuegos.size(); i++) {

        float promedio =(listaJuegos[i].historia + listaJuegos[i].grafico + listaJuegos[i].jugabilidad) / 3.0f;
        //.toStdString para presentar una variable string
        archivo << "Nombre: " << listaJuegos[i].nombre.toStdString() << " " << "Jugabilidad: " <<listaJuegos[i].jugabilidad << " "<< "Historia: " <<listaJuegos[i].historia << " "
                << "Graficos: " <<listaJuegos[i].grafico << " "
                << "Promedio:" << promedio << endl;
    }
    archivo.close();
}
void MainWindow::mostrarDatos() {
    // Limpiar tabla
    ui->mostarLista->setRowCount(0);
    for (int i = 0; i < listaJuegos.size(); i++) {
        ui->mostarLista->insertRow(i);
        float promedio = (listaJuegos[i].historia + listaJuegos[i].grafico +listaJuegos[i].jugabilidad) / 3.0f;

        ui->mostarLista->setItem(i, 0,new QTableWidgetItem(listaJuegos[i].nombre));
        ui->mostarLista->setItem(i, 1,new QTableWidgetItem(QString::number(promedio , 'f', 2)));
    }
}
void MainWindow::on_mostarLista_cellClicked(int row, int column) {
    if (row >= 0 && row < listaJuegos.size()) {
        ui->nombreAgregar->setText(listaJuegos[row].nombre);
        ui->jugabilidadAgregar->setText(QString::number(listaJuegos[row].jugabilidad));
        ui->historiaAgregar->setText(QString::number(listaJuegos[row].historia));
        ui->graficosAgregar->setText(QString::number(listaJuegos[row].grafico));
    }
}
void MainWindow::on_eliminar_clicked()
{
    int fila = ui->mostarLista->currentRow();

    if (fila < 0 or fila >= listaJuegos.size()) {
        ui->label_7->setText("Seleccione un registro");
        return;
    }

    listaJuegos.removeAt(fila);
    mostrarDatos();
    ofstream archivo("C:/Users/grego/Documents/Proyecto1-MODIFICACION/archivo.txt", ios::out);
    for (int i = 0; i < listaJuegos.size(); i++) {
        float promedio = (listaJuegos[i].historia +listaJuegos[i].grafico +listaJuegos[i].jugabilidad) / 3.0f;

        archivo << "Nombre: " << listaJuegos[i].nombre.toStdString() << " "<< "Jugabilidad: " << listaJuegos[i].jugabilidad << " "<< "Historia: " << listaJuegos[i].historia << " "
                << "Graficos: " << listaJuegos[i].grafico << " "
                << "Promedio: " << promedio << endl;
    }
    archivo.close();
    // limpiar
    ui->nombreAgregar->clear();
    ui->jugabilidadAgregar->clear();
    ui->historiaAgregar->clear();
    ui->graficosAgregar->clear();
}

void MainWindow::on_actualizar_clicked()
{
    int fila = ui->mostarLista->currentRow();
    if (fila < 0 or fila >= listaJuegos.size()) {
        ui->label_7->setText("Seleccione un registro");
        return;
    }
    QString nombre = ui->nombreAgregar->text();
    float j = ui->jugabilidadAgregar->text().toFloat();
    float h = ui->historiaAgregar->text().toFloat();
    float g = ui->graficosAgregar->text().toFloat();

    if (nombre.isEmpty() or j <0 or j > 10 or h < 0 or h > 10 or g <0 or g > 10) {
        ui->label_7->setText("Datos inválidos");
        return;
    }
    listaJuegos[fila].nombre = nombre;
    listaJuegos[fila].jugabilidad = j;
    listaJuegos[fila].historia = h;
    listaJuegos[fila].grafico = g;

    mostrarDatos();
    ofstream archivo("C:/Users/grego/Documents/Proyecto1-MODIFICACION/archivo.txt", ios::out);
    for (int i = 0; i <listaJuegos.size(); i++) {
        float promedio = (listaJuegos[i].historia + listaJuegos[i].grafico +listaJuegos[i].jugabilidad) / 3.0f;

        archivo << "Nombre: " << listaJuegos[i].nombre.toStdString() << " "<< "Jugabilidad: " << listaJuegos[i].jugabilidad << " "<< "Historia: " << listaJuegos[i].historia << " "
                << "Graficos: " << listaJuegos[i].grafico << " "
                << "Promedio: " << promedio << endl;
    }
    archivo.close();
}

