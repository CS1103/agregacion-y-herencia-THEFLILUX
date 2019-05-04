//
// Created by jorge on 3/05/19.
//

#ifndef BIBLIOTECA_VOLUMEN_H
#define BIBLIOTECA_VOLUMEN_H

#include <string>
#include "Biblioteca.h"

class Volumen{
protected:
    std::string nombre;
    int numVol;

public:
    Volumen(std::string nombre, int numVol): nombre{nombre}, numVol{numVol}{}
    Volumen() = default;

    virtual ~Volumen();

    virtual void mostrar()=0;
};


#endif //BIBLIOTECA_VOLUMEN_H
