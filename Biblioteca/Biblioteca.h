//
// Created by jorge on 3/05/19.
//

#ifndef BIBLIOTECA_BIBLIOTECA_H
#define BIBLIOTECA_BIBLIOTECA_H

#include <vector>
#include <iostream>
#include "Volumen.h"
using namespace std;

class Biblioteca {

    int maxLibros=0;
    int maxRevistas=0;
    vector <Volumen*> coleccion;

public:
    Biblioteca(int maxLibros, int maxRevistas, int i, int i1) : maxLibros{maxLibros}, maxRevistas{maxRevistas}{};
    ~Biblioteca();

    void mostrarBiblioteca ();
    void incluir(Volumen* ptr);

};


#endif //BIBLIOTECA_BIBLIOTECA_H
