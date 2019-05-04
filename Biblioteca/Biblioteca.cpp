#include "Biblioteca.h"
#include "Volumen.h"
//
// Created by jorge on 3/05/19.
//
Biblioteca::~Biblioteca() = default;

void Biblioteca::mostrarBiblioteca() {
    for (int i=0; i<maxLibros+maxRevistas; i++){
        coleccion[i]->mostrar();
    }
}

void Biblioteca::incluir(Volumen* ptr) {
    coleccion.push_back(ptr);
    maxLibros++;
    maxRevistas++;
}


