#include <vector>
#include <iostream>
#include "Volumen.h"
#include "Libro.h"
#include "Revista.h"
using  namespace std;


int main() {

    Biblioteca b(0, 0, 10, 10);

    Volumen* ptr1 = new Libro("jorge",1,4);
    Volumen* ptr2 = new Libro("maria",2,4);
    Volumen* ptr3 = new Revista("Susy",3,4);
    Volumen* ptr4 = new Revista("Ella",4,4);

    b.incluir(ptr1);
    b.incluir(ptr2);
    b.incluir(ptr3);
    b.incluir(ptr4);

    b.mostrarBiblioteca();

    return 0;
}