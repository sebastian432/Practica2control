#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>

using namespace std;

class Estudiante
{
    private:
            string nombre;
            string apellido;
            string codigo;
    public:
            Estudiante(string,string,string);
            Estudiante();
            ~Estudiante();

            string Obtener_nombre();
            string Obtener_apellido();
            string Obtener_codigo();
};

#endif // ESTUDIANTE_H

