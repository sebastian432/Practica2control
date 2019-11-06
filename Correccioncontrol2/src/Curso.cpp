#include "Curso.h"
#include "Estudiante.h"
#include <iostream>
using namespace std;

Curso::Curso(int _cantidadAlumnos,string _nombre,string _codigo)
{
    cout<<"normal"<<endl;
    cantidadAlumnos=_cantidadAlumnos;
    nombre=_nombre;
    codigo=_codigo;
}

Curso::Curso(const Curso& C)
{
    cout<<"copia"<<endl;
    cantidadAlumnos=C.cantidadAlumnos;
    nombre=C.nombre;
    codigo=C.codigo;
}

void Curso::Obtener_nombre()
{
    cout<<"El alumno se llama: "<<nombre<<endl;
}

void Curso::Obtener_codigo()
{
    cout<<"El codigo del alumno es: "<<codigo<<endl;
}

void Curso::Obtener_cantidadAlumnos()
{

    cout<<"hay "<<cantidadAlumnos<<" alumnos en total. "<<endl;
}

void Curso::Incrementa_Nestudiantes()
{
    aumento_cantidad=cantidadAlumnos+1;
    cout<<"El numero de alumnos mas 1 es: "<<aumento_cantidad<<endl;
    cout<<endl;
}

