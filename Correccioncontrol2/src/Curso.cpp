#include "Curso.h"
#include "Estudiante.h"
#include <iostream>
using namespace std;

Curso::Curso(int _cantidadAlumnos,string _nombre,string _codigo,Estudiante* _alumnos)
{
    cout<<"normal"<<endl;
    cantidadAlumnos=_cantidadAlumnos;
    nombre=_nombre;
    codigo=_codigo;
    alumnos=_alumnos;

}
Curso::Curso()
{

}

Curso::Curso(const Curso& C)
{
    cout<<"copia"<<endl;
    cantidadAlumnos=C.cantidadAlumnos;
    nombre=C.nombre;
    codigo=C.codigo;
    alumnos=C.alumnos;
}

string Curso::Ob_nombre()
{
   return nombre;
}

string Curso::Ob_codigo()
{
    return codigo;
}

int Curso::Ob_cantidadAlumnos()
{

    return cantidadAlumnos;
}

Estudiante* Curso::Ob_direccion()
{
    return alumnos;
}


int Curso::In_Nestudiantes()
{
    incrementar=cantidadAlumnos+1;
    return incrementar;
}

