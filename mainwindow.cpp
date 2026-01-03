#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AgregarButton_clicked()
{
    nombre=ui->nombreAgregar->text();
    historia = ui->historiaAgregar->text().toFloat();
    if(historia <0){
        QString mensaje = "valor invalido";
        return ui->problemas->setText(mensaje);  // que solo  muestre el error un vez
    }
    graficos = ui->graficosAgregar->text().toFloat();
    if(graficos<0){
        QString mensaje = "valor invalido";
        return ui->problemas->setText(mensaje);  // que solo  muestre el error un vez
    }
    jugabilidad = ui->jugabilidadAgregar->text().toFloat();
    if(jugabilidad<0){
        QString mensaje = "valor invalido";
        return ui->problemas->setText(mensaje);  // que solo  muestre el error un vez
    }
    float promedio = (historia + graficos + jugabilidad)/3.0;
    ui->resultado->setText(QString::number(promedio));
    ui->resultadoNombre->setText(nombre);
}
// validar la calificacion maxima nota = 5

