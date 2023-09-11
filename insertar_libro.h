#pragma once

#include "estructura.h"
#include "presentar_libro.h"
#include "rlutil.h"

//void dibujo_libro();
void leer_libro(tLibros & libroNuevo, tlistaLibros& lista);    
void insertar_libro(tlistaLibros& ListaLibros, tLibros& libroNuevo); 
//void dibujo_cuadro();
void ColorSeleccion_presentar(string text, int posX, int posY, bool selected); 