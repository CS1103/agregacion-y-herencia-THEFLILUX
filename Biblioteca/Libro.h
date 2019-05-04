//
// Created by jorge on 3/05/19.
//

#ifndef BIBLIOTECA_LIBRO_H
#define BIBLIOTECA_LIBRO_H

#include "Volumen.h"

class Libro: public Volumen {

    int numLibros;

public:
    Libro(std::string nombre, int numVol, int numLibros): Volumen(nombre, numVol), numLibros{numLibros}{}
    ~Libro() override;

    void mostrar() override ;

};


#endif //BIBLIOTECA_LIBRO_H
