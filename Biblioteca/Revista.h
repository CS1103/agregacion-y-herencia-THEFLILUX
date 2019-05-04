//
// Created by jorge on 3/05/19.
//

#ifndef BIBLIOTECA_REVISTA_H
#define BIBLIOTECA_REVISTA_H

#include "Volumen.h"

class Revista: public Volumen {

    int numRevistas;

public:
    Revista(std::string nombre, int numVol, int numRevistas): Volumen(nombre, numVol), numRevistas{numRevistas}{}
    ~Revista() override;

    void mostrar() override;

};


#endif //BIBLIOTECA_REVISTA_H
