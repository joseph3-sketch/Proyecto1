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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
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
    QLabel *label_6;
    QLabel *resultado;
    QPushButton *AgregarButton;
    QLabel *label_7;
    QLabel *resultadoNombre;
    QLabel *problemas;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(527, 293);
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
        nombreAgregar->setGeometry(QRect(120, 10, 113, 24));
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
        line->setGeometry(QRect(240, -10, 21, 271));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(260, 10, 61, 16));
        label_6->setFont(font);
        resultado = new QLabel(centralwidget);
        resultado->setObjectName("resultado");
        resultado->setGeometry(QRect(330, 10, 141, 21));
        resultado->setTextInteractionFlags(Qt::TextInteractionFlag::TextEditable);
        AgregarButton = new QPushButton(centralwidget);
        AgregarButton->setObjectName("AgregarButton");
        AgregarButton->setGeometry(QRect(80, 210, 80, 24));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(260, 40, 211, 16));
        label_7->setFont(font);
        resultadoNombre = new QLabel(centralwidget);
        resultadoNombre->setObjectName("resultadoNombre");
        resultadoNombre->setGeometry(QRect(260, 60, 231, 21));
        problemas = new QLabel(centralwidget);
        problemas->setObjectName("problemas");
        problemas->setGeometry(QRect(260, 220, 261, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 527, 21));
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
        label_6->setText(QCoreApplication::translate("MainWindow", "Promedio", nullptr));
        resultado->setText(QString());
        AgregarButton->setText(QCoreApplication::translate("MainWindow", "Agregar", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Nombre del juego agregado", nullptr));
        resultadoNombre->setText(QString());
        problemas->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
