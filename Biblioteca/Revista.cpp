//
// Created by jorge on 3/05/19.
//

#include <vector>
#include <iostream>
#include "Revista.h"
using namespace std;
Revista::~Revista() = default;

void Revista::mostrar() {
    std::cout<<"\nVolumen #"<<numVol<<":   Revista #"<<numRevistas<<"   Título: \""<<nombre<<'\"';
}
