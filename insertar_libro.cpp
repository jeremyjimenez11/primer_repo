#include "insertar_libro.h"
#include <fstream>

void leer_libro(tLibros& libroNuevo, tlistaLibros& lista) {  
    int columna = 11, fila = 10;
    char aux; 
    rlutil::locate(columna, fila); 
    cout << "NOMBRE DEL LIBRO: ";
    cin.ignore(); 
    getline(cin, libroNuevo.nombre);
    rlutil::locate(columna, fila + 2); 
    cout << "AUTOR: ";
    getline(cin, libroNuevo.autor);
    rlutil::locate(columna, fila + 4);
    cout << "CATEGORIA: ";
    getline(cin, libroNuevo.genero);
    rlutil::locate(columna, fila + 6);
    cout << "CODIGO UNICO: " << lista.contador_libros++;
    rlutil::locate(columna, fila + 8);
    cout << "EXISTENTES: ";
    cin >> libroNuevo.existentes;
    rlutil::locate(columna, fila + 10);
    cout << "PRESTADOS: ";
    cin >> libroNuevo.prestados;
    rlutil::locate(columna, fila + 12);
    cout << "DISPONIBLES: " << libroNuevo.existentes - libroNuevo.prestados; 
}

void insertar_libro(tlistaLibros& ListaLibros, tLibros& libroNuevo) {
    if (ListaLibros.contador_libros < DIM_BOOK) {
        ofstream archivoS("libros.txt");
        if (archivoS.is_open()) {
            archivoS << libroNuevo.nombre << endl
                << libroNuevo.autor << endl
                << libroNuevo.genero << endl
                << ListaLibros.contador_libros++ << endl
                << libroNuevo.existentes << endl
                << libroNuevo.prestados << endl
                << libroNuevo.existentes - libroNuevo.prestados << endl;
            archivoS.close();
        }
    }
}