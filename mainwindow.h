#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QString>

// Estructura para almacenar los datos de cada juego
struct Juego {
    QString nombre;
    float jugabilidad;
    float historia;
    float grafico;
};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    // Función para actualizar la tabla visualmente
    void mostrarDatos();

private slots:
    void on_AgregarButton_clicked();
    void on_mostarLista_cellClicked(int row, int column);
    void on_actualizar_clicked();
    void on_eliminar_clicked();


private:
    Ui::MainWindow *ui;
    QVector<Juego> listaJuegos; // Contenedor para guardar los juegos
};

#endif
