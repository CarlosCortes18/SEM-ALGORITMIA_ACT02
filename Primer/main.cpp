#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();
    listaNeurona listita;
    listita.mostrar();
    /* INSERTAR AL FINAL
    cout << "\nPaso #1" << endl;
    listita.agregar_final(4,5.6,56,-23,23,67,102);
    listita.mostrar();
    cout << "\nPaso #2" << endl;
    listita.agregar_final(8,1.2,5,18,71,12,45);
    listita.mostrar();
    cout << "\nPaso #3" << endl;
    listita.agregar_final(6,10.2,65,34,121,108,63);
    listita.mostrar();
    */

    /* INSERTAR AL INICIO
    cout << "\nPaso #1" << endl;
    listita.agregar_inicio(4,5.6,56,-23,23,67,102);
    listita.mostrar();
    cout << "\nPaso #2" << endl;
    listita.agregar_inicio(8,1.2,5,18,71,12,45);
    listita.mostrar();
    cout << "\nPaso #3" << endl;
    listita.agregar_inicio(6,10.2,65,34,121,108,63);
    listita.mostrar();
    */

    //INSERTAR VARIADO
    cout << "\nPaso #1" << endl;
    listita.agregar_inicio(4,5.6,56,-23,23,67,102);
    listita.mostrar();
    cout << "\nPaso #2" << endl;
    listita.agregar_final(8,1.2,5,18,71,12,45);
    listita.mostrar();
    cout << "\nPaso #3" << endl;
    listita.agregar_inicio(6,10.2,65,34,121,108,63);
    listita.mostrar();

    return a.exec();
}
