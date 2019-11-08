#ifndef CURSO_H
#define CURSO_H
#include <iostream>
#include "Estudiante.h"

using namespace std;

class Curso
{
    private:
            int cantidadAlumnos;
            string nombre;
            string codigo;
            Estudiante *alumnos;
            int incrementar;
    public:
            Curso(int,string,string,Estudiante *alumnos);
            Curso(const Curso& C);
            Curso();

            string Ob_nombre();
            string Ob_codigo();
            int Ob_cantidadAlumnos();
            int In_Nestudiantes();
            Estudiante *Ob_direccion();

};

#endif // CURSO_H
