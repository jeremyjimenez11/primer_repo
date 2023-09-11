#pragma once
#include <iostream>
#include <string>
using namespace std;
#include <fstream>
#include "Estructura.h"
#include "presentar_libro.h"
#include "rlutil.h"
void devolver(tlistaLibros& lista, tUserslist& list); 
void alquilar(tlistaLibros& lista, tUserslist& list, bool& control, int& pos);
// modifica la estrucutura de libros y usuarios

void cargar_prestamistas(tUserslist& list, bool& ok);
void Guardar_prestados(tUserslist& list);