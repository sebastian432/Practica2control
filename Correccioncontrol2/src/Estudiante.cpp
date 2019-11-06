#include "Estudiante.h"
#include <iostream>
using namespace std;


Estudiante::Estudiante(string _nombre,string _apellido,string _codigo)
{
    nombre=_nombre;
    apellido=_apellido;
    codigo=_codigo;
}


void Estudiante::Obtener_nombre()
{
    cout<<"El nombre del estudiante es: "<<nombre<<endl;
}

void Estudiante::Obtener_apellido()
{
    cout<<"El apellido del estudiante es: "<<apellido<<endl;
}

void Estudiante::Obtener_codigo()
{
    cout<<"El codigo del estudiante es: "<<codigo<<endl;
    cout<<endl;
}
