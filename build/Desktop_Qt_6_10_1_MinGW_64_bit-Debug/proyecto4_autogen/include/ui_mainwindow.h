/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *nombreAgregar;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *jugabilidadAgregar;
    QLineEdit *historiaAgregar;
    QLineEdit *graficosAgregar;
    QFrame *line;
    QPushButton *AgregarButton;
    QLabel *label_7;
    QTableWidget *mostarLista;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(815, 511);
        MainWindow->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(94, 255, 228);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 171, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Rounded MT")});
        font.setBold(true);
        label->setFont(font);
        label->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        nombreAgregar = new QLineEdit(centralwidget);
        nombreAgregar->setObjectName("nombreAgregar");
        nombreAgregar->setGeometry(QRect(150, 10, 113, 24));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 50, 121, 21));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 90, 81, 16));
        label_3->setFont(font);
        label_3->setCursor(QCursor(Qt::CursorShape::WaitCursor));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 130, 49, 16));
        label_4->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 170, 49, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Rounded MT")});
        font1.setBold(true);
        font1.setStrikeOut(false);
        label_5->setFont(font1);
        jugabilidadAgregar = new QLineEdit(centralwidget);
        jugabilidadAgregar->setObjectName("jugabilidadAgregar");
        jugabilidadAgregar->setGeometry(QRect(80, 90, 113, 24));
        historiaAgregar = new QLineEdit(centralwidget);
        historiaAgregar->setObjectName("historiaAgregar");
        historiaAgregar->setGeometry(QRect(80, 130, 113, 24));
        graficosAgregar = new QLineEdit(centralwidget);
        graficosAgregar->setObjectName("graficosAgregar");
        graficosAgregar->setGeometry(QRect(80, 170, 113, 24));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(270, 0, 21, 271));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        AgregarButton = new QPushButton(centralwidget);
        AgregarButton->setObjectName("AgregarButton");
        AgregarButton->setGeometry(QRect(80, 210, 80, 24));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(310, 290, 121, 16));
        label_7->setFont(font);
        mostarLista = new QTableWidget(centralwidget);
        mostarLista->setObjectName("mostarLista");
        mostarLista->setGeometry(QRect(320, 70, 321, 171));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(700, 90, 90, 29));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(700, 140, 90, 29));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(700, 190, 90, 29));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(410, 30, 121, 16));
        label_8->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 815, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SISTEMA GOTY", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nombre del Juego", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "calificacion", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Jugabilidad", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Historia", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Graficos", nullptr));
        AgregarButton->setText(QCoreApplication::translate("MainWindow", "Agregar", nullptr));
        label_7->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Actualizar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Ganador", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Lista de Juegos ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
