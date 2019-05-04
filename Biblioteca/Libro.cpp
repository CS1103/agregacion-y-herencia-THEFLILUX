//
// Created by jorge on 3/05/19.
//
#include "Libro.h"

Libro::~Libro() = default;

void Libro::mostrar() {
    std::cout<<"\nVolumen #"<<numVol<<":   Libro #"<<numLibros<<"   Título: \""<<nombre<<'\"';
}
