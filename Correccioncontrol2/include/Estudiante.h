#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>

using namespace std;

class Estudiante
{
    public:
            string nombre;
            string apellido;
            string codigo;
            Estudiante(string,string,string);

            void Obtener_nombre();
            void Obtener_apellido();
            void Obtener_codigo();
};

#endif // ESTUDIANTE_H
