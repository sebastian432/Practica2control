#include <iostream>
#include "Estudiante.h"
#include "Curso.h"

using namespace std;


int main()
{
    Estudiante e1("sebastian","paz","14523");
    Estudiante e2("diego","cardenas","36178");

    e1.Obtener_nombre();
    e1.Obtener_apellido();
    e1.Obtener_codigo();

    e2.Obtener_nombre();
    e2.Obtener_apellido();
    e2.Obtener_codigo();


    Curso c1(28,"Lucas","22154");
    c1.Obtener_nombre();
    c1.Obtener_codigo();
    c1.Obtener_cantidadAlumnos();
    c1.Incrementa_Nestudiantes();

    Curso c2=c1;
    c2.Obtener_nombre();
    c2.Obtener_codigo();
    c2.Obtener_cantidadAlumnos();
    c2.Incrementa_Nestudiantes();
}























