cmake_minimum_required(VERSION 3.8)
project(Biblioteca)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Biblioteca.cpp Biblioteca.h Volumen.cpp Volumen.h Libro.cpp Libro.h Revista.cpp Revista.h)
add_executable(Biblioteca ${SOURCE_FILES})