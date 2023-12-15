/********************************************************************************
** Form generated from reading UI file 'cframe.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFRAME_H
#define UI_CFRAME_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cframe
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QLabel *label_13;
    QWidget *tab;
    QLabel *label;
    QComboBox *tipolaboratorio;
    QDateEdit *dateEdit;
    QLabel *label_2;
    QLineEdit *clase;
    QLabel *label_3;
    QRadioButton *docente;
    QRadioButton *alumno;
    QRadioButton *educacion;
    QRadioButton *administrativo;
    QComboBox *comboBox;
    QLabel *label_4;
    QLineEdit *nombre;
    QLabel *label_5;
    QLineEdit *cuenta;
    QLabel *label_6;
    QLineEdit *correo;
    QLabel *label_7;
    QSpinBox *integrantes;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QComboBox *hora_inicio;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *hora_final;
    QPushButton *reservar;
    QLineEdit *motivo;
    QLabel *label_25;
    QLineEdit *cuentas;
    QLineEdit *herramientas;
    QWidget *tab_3;
    QLabel *label_14;
    QTextEdit *mostrar2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Cframe)
    {
        if (Cframe->objectName().isEmpty())
            Cframe->setObjectName(QString::fromUtf8("Cframe"));
        Cframe->resize(1108, 768);
        centralwidget = new QWidget(Cframe);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1091, 731));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 10, 911, 441));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 221, 16));
        tipolaboratorio = new QComboBox(tab);
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->addItem(QString());
        tipolaboratorio->setObjectName(QString::fromUtf8("tipolaboratorio"));
        tipolaboratorio->setGeometry(QRect(10, 40, 281, 24));
        dateEdit = new QDateEdit(tab);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(10, 620, 110, 25));
        dateEdit->setMinimumDate(QDate(2023, 11, 14));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 291, 16));
        clase = new QLineEdit(tab);
        clase->setObjectName(QString::fromUtf8("clase"));
        clase->setGeometry(QRect(10, 100, 281, 24));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 130, 291, 16));
        docente = new QRadioButton(tab);
        docente->setObjectName(QString::fromUtf8("docente"));
        docente->setGeometry(QRect(400, 10, 97, 22));
        alumno = new QRadioButton(tab);
        alumno->setObjectName(QString::fromUtf8("alumno"));
        alumno->setGeometry(QRect(290, 10, 97, 22));
        alumno->setChecked(true);
        educacion = new QRadioButton(tab);
        educacion->setObjectName(QString::fromUtf8("educacion"));
        educacion->setGeometry(QRect(510, 10, 161, 22));
        administrativo = new QRadioButton(tab);
        administrativo->setObjectName(QString::fromUtf8("administrativo"));
        administrativo->setGeometry(QRect(650, 10, 161, 22));
        comboBox = new QComboBox(tab);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 250, 281, 24));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 230, 221, 16));
        nombre = new QLineEdit(tab);
        nombre->setObjectName(QString::fromUtf8("nombre"));
        nombre->setGeometry(QRect(10, 310, 281, 24));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 290, 291, 16));
        cuenta = new QLineEdit(tab);
        cuenta->setObjectName(QString::fromUtf8("cuenta"));
        cuenta->setGeometry(QRect(10, 360, 281, 24));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 340, 291, 16));
        correo = new QLineEdit(tab);
        correo->setObjectName(QString::fromUtf8("correo"));
        correo->setGeometry(QRect(10, 410, 281, 24));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 390, 291, 16));
        integrantes = new QSpinBox(tab);
        integrantes->setObjectName(QString::fromUtf8("integrantes"));
        integrantes->setGeometry(QRect(10, 460, 46, 25));
        integrantes->setMinimum(1);
        integrantes->setMaximum(35);
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 440, 291, 16));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 500, 291, 16));
        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 600, 291, 16));
        hora_inicio = new QComboBox(tab);
        hora_inicio->addItem(QString());
        hora_inicio->addItem(QString());
        hora_inicio->addItem(QString());
        hora_inicio->addItem(QString());
        hora_inicio->addItem(QString());
        hora_inicio->addItem(QString());
        hora_inicio->addItem(QString());
        hora_inicio->addItem(QString());
        hora_inicio->addItem(QString());
        hora_inicio->setObjectName(QString::fromUtf8("hora_inicio"));
        hora_inicio->setGeometry(QRect(320, 280, 231, 24));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(320, 250, 221, 16));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(320, 330, 241, 16));
        hora_final = new QComboBox(tab);
        hora_final->addItem(QString());
        hora_final->addItem(QString());
        hora_final->addItem(QString());
        hora_final->addItem(QString());
        hora_final->addItem(QString());
        hora_final->addItem(QString());
        hora_final->addItem(QString());
        hora_final->addItem(QString());
        hora_final->addItem(QString());
        hora_final->setObjectName(QString::fromUtf8("hora_final"));
        hora_final->setGeometry(QRect(320, 370, 231, 24));
        reservar = new QPushButton(tab);
        reservar->setObjectName(QString::fromUtf8("reservar"));
        reservar->setGeometry(QRect(350, 460, 171, 71));
        motivo = new QLineEdit(tab);
        motivo->setObjectName(QString::fromUtf8("motivo"));
        motivo->setGeometry(QRect(10, 160, 281, 61));
        label_25 = new QLabel(tab);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(310, 50, 291, 16));
        cuentas = new QLineEdit(tab);
        cuentas->setObjectName(QString::fromUtf8("cuentas"));
        cuentas->setGeometry(QRect(10, 520, 271, 71));
        herramientas = new QLineEdit(tab);
        herramientas->setObjectName(QString::fromUtf8("herramientas"));
        herramientas->setGeometry(QRect(310, 70, 281, 81));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 20, 211, 16));
        mostrar2 = new QTextEdit(tab_3);
        mostrar2->setObjectName(QString::fromUtf8("mostrar2"));
        mostrar2->setGeometry(QRect(30, 60, 1031, 601));
        mostrar2->setReadOnly(true);
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 20, 131, 25));
        tabWidget->addTab(tab_3, QString());
        Cframe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Cframe);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1108, 25));
        Cframe->setMenuBar(menubar);
        statusbar = new QStatusBar(Cframe);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Cframe->setStatusBar(statusbar);

        retranslateUi(Cframe);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Cframe);
    } // setupUi

    void retranslateUi(QMainWindow *Cframe)
    {
        Cframe->setWindowTitle(QApplication::translate("Cframe", "Cframe", nullptr));
        label_13->setText(QApplication::translate("Cframe", "Este espacio virtual se utilizar\303\241 para la reservaci\303\263n de Laboratorios de la Facultad de Ingenier\303\255a. \n"
"\n"
"Requisitos: \n"
" Solicitar el Laboratorios con 2 d\303\255as de anticipaci\303\263n.\n"
" Haber cursado las clases que involucren los equipos  presentes en el laboratorio.\n"
"Realizar la Solicitud entre 8:00 a.m. a 5:00 p.m\n"
"\n"
"Reglamentos: \n"
" Mantener el orden y la limpieza del laboratorio solicitado para evitar amonestaciones verbales o escritas ( comit\303\251 de \303\251tica).\n"
" No ingresar comidas ni bebidas a los laboratorio de lo contrario se remitir\303\241n al comit\303\251 de \303\251tica,\n"
"No modificar, Ajustar o Cambiar cualquier parte de la m\303\241quina sin autorizacion y supervisi\303\263n de las personas encargados del laboratorio. \n"
"Utilizar la vestimenta correcta: \n"
"Zapatos Cerrados (De preferencia con punta de seguridad o cubos). \n"
"Ropa no holgada o muy suelta. ( De preferencia jeans y camisas)\n"
"Pelo recogido . \n"
"\n"
"Notas: \n"
" "
                        "\n"
"Una vez enviado el formulario debe esperar la confirmaci\303\263n de aprobaci\303\263n de uso del laboratorio solicitado de lo contrario no puede hacer uso del laboratorio. Cualquier pregunta o problema con su reservaci\303\263n puede enviar un correo a : winder.matamoros@unitec.edu.hn", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Cframe", "Reglamentos", nullptr));
        label->setText(QApplication::translate("Cframe", "Laboratorio Solicitado", nullptr));
        tipolaboratorio->setItemText(0, QApplication::translate("Cframe", "Laboratorio computo #1", nullptr));
        tipolaboratorio->setItemText(1, QApplication::translate("Cframe", "Laboratorio computo #5 ", nullptr));
        tipolaboratorio->setItemText(2, QApplication::translate("Cframe", "Laboratorio de Fisica", nullptr));
        tipolaboratorio->setItemText(3, QApplication::translate("Cframe", "Laboratorio de maquinas y herramientas ", nullptr));
        tipolaboratorio->setItemText(4, QApplication::translate("Cframe", "Laboratorio de electronica ", nullptr));
        tipolaboratorio->setItemText(5, QApplication::translate("Cframe", "Laboratorio de mecatronica ", nullptr));
        tipolaboratorio->setItemText(6, QApplication::translate("Cframe", "Laboratorio de biomedica", nullptr));
        tipolaboratorio->setItemText(7, QApplication::translate("Cframe", "Laboratorio de energia", nullptr));
        tipolaboratorio->setItemText(8, QApplication::translate("Cframe", "Laboratorio de industrial", nullptr));
        tipolaboratorio->setItemText(9, QApplication::translate("Cframe", "Laboratorio de civil", nullptr));
        tipolaboratorio->setItemText(10, QApplication::translate("Cframe", "Laboratorio de redes", nullptr));
        tipolaboratorio->setItemText(11, QApplication::translate("Cframe", "Laboratorio de quimica", nullptr));
        tipolaboratorio->setItemText(12, QApplication::translate("Cframe", "Laboratorio de software", nullptr));
        tipolaboratorio->setItemText(13, QApplication::translate("Cframe", "Laboratorio de telecomunicaciones", nullptr));
        tipolaboratorio->setItemText(14, QApplication::translate("Cframe", "Laboratorio de automatizacion", nullptr));
        tipolaboratorio->setItemText(15, QApplication::translate("Cframe", "Laboratorio de computo #2", nullptr));
        tipolaboratorio->setItemText(16, QApplication::translate("Cframe", "Laboratorio de computo #3", nullptr));
        tipolaboratorio->setItemText(17, QApplication::translate("Cframe", "Laboratorio de computo #4", nullptr));
        tipolaboratorio->setItemText(18, QApplication::translate("Cframe", "Laboratorio de inteligencia artificial", nullptr));
        tipolaboratorio->setItemText(19, QString());

        label_2->setText(QApplication::translate("Cframe", "Clase para la cual requiere el uso del laboratorio", nullptr));
        label_3->setText(QApplication::translate("Cframe", "Motivo de uso del laboratorio", nullptr));
        docente->setText(QApplication::translate("Cframe", "Docente", nullptr));
        alumno->setText(QApplication::translate("Cframe", "Alumno", nullptr));
        educacion->setText(QApplication::translate("Cframe", "Educacion continua", nullptr));
        administrativo->setText(QApplication::translate("Cframe", "Administrativo", nullptr));
        comboBox->setItemText(0, QApplication::translate("Cframe", "Diariamente", nullptr));
        comboBox->setItemText(1, QApplication::translate("Cframe", "Semanalmente", nullptr));

        label_4->setText(QApplication::translate("Cframe", "Repetir reservacion", nullptr));
        label_5->setText(QApplication::translate("Cframe", "Nombre completo", nullptr));
        label_6->setText(QApplication::translate("Cframe", "Numero de cuenta", nullptr));
        label_7->setText(QApplication::translate("Cframe", "Correo institucional", nullptr));
        label_8->setText(QApplication::translate("Cframe", "Cantidad de integrantes de grupo", nullptr));
        label_9->setText(QApplication::translate("Cframe", "Nombres y numero de cuentas", nullptr));
        label_10->setText(QApplication::translate("Cframe", "Fecha", nullptr));
        hora_inicio->setItemText(0, QApplication::translate("Cframe", "06 : 45", nullptr));
        hora_inicio->setItemText(1, QApplication::translate("Cframe", "08 : 10", nullptr));
        hora_inicio->setItemText(2, QApplication::translate("Cframe", "09 : 55", nullptr));
        hora_inicio->setItemText(3, QApplication::translate("Cframe", "11 : 15", nullptr));
        hora_inicio->setItemText(4, QApplication::translate("Cframe", "13 : 20", nullptr));
        hora_inicio->setItemText(5, QApplication::translate("Cframe", "14 : 40", nullptr));
        hora_inicio->setItemText(6, QApplication::translate("Cframe", "16 : 00", nullptr));
        hora_inicio->setItemText(7, QApplication::translate("Cframe", "17 : 20", nullptr));
        hora_inicio->setItemText(8, QApplication::translate("Cframe", "18 : 40", nullptr));

        label_11->setText(QApplication::translate("Cframe", "Hora de inicio de la reservacion", nullptr));
        label_12->setText(QApplication::translate("Cframe", "Hora de finalizacion de la reservacion", nullptr));
        hora_final->setItemText(0, QApplication::translate("Cframe", "08 : 10", nullptr));
        hora_final->setItemText(1, QApplication::translate("Cframe", "09 : 55", nullptr));
        hora_final->setItemText(2, QApplication::translate("Cframe", "11 : 15", nullptr));
        hora_final->setItemText(3, QApplication::translate("Cframe", "13 : 20", nullptr));
        hora_final->setItemText(4, QApplication::translate("Cframe", "14 : 40", nullptr));
        hora_final->setItemText(5, QApplication::translate("Cframe", "16 : 00", nullptr));
        hora_final->setItemText(6, QApplication::translate("Cframe", "17 : 20", nullptr));
        hora_final->setItemText(7, QApplication::translate("Cframe", "18 : 40", nullptr));
        hora_final->setItemText(8, QApplication::translate("Cframe", "20  : 00", nullptr));

        reservar->setText(QApplication::translate("Cframe", "Reservar", nullptr));
        label_25->setText(QApplication::translate("Cframe", "Herramientas a usar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Cframe", "Reservar", nullptr));
        label_14->setText(QApplication::translate("Cframe", "Reservas Actuales", nullptr));
        pushButton->setText(QApplication::translate("Cframe", "Cargar Reservas", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Cframe", "Reservas Actuales", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cframe: public Ui_Cframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
