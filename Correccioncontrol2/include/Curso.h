#ifndef CURSO_H
#define CURSO_H
#include <iostream>
#include "Estudiante.h"

using namespace std;

class Curso
{
    private:
            int cantidadAlumnos;
            int aumento_cantidad;
    public:
            string nombre;
            string codigo;
            Curso(int,string,string);
            Curso(const Curso& C);
            void Obtener_nombre();
            void Obtener_codigo();
            void Obtener_cantidadAlumnos();
            void Incrementa_Nestudiantes();
};

#endif // CURSO_H
