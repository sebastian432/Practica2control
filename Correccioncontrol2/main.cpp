#include <iostream>
#include "Estudiante.h"
#include "Curso.h"

using namespace std;


int main()
{
    Estudiante e2("sebastian","paz","14523"),e3("diego","cardenas","36178");
    Estudiante e1[2]={Estudiante(e2), Estudiante(e3)};

    cout<<e2.Obtener_nombre()<<" "<<e2.Obtener_apellido()<<" "<<e2.Obtener_codigo()<<endl;
    cout<<e3.Obtener_nombre()<<" "<<e3.Obtener_apellido()<<" "<<e3.Obtener_codigo()<<endl<<endl;



    Curso c1(100,"Lucas","22154",e1);
    cout<<"nombre: "<<c1.Ob_nombre()<<endl;
    cout<<"codigo: "<<c1.Ob_codigo()<<endl;
    cout<<"cantidad de alumnos: "<<c1.Ob_cantidadAlumnos()<<endl;
    cout<<"numero de estudiantes: "<<c1.In_Nestudiantes()<<endl<<endl;
 //   cout<<c1.Ob_direccion();

    Curso c2=c1;
    cout<<"nombre: "<<c2.Ob_nombre()<<endl;
    cout<<"codigo: "<<c2.Ob_codigo()<<endl;
    cout<<"cantidad alumnos: "<<c2.Ob_cantidadAlumnos()<<endl;
    cout<<"numero de estudiantes: "<<c2.In_Nestudiantes()<<endl<<endl;

    Estudiante *ptr=e1;
    cout<<"nombre: "<<ptr->Obtener_nombre()<<endl;
    cout<<"apellido: "<<ptr->Obtener_apellido()<<endl;
    cout<<"codigo: "<<ptr->Obtener_codigo()<<endl<<endl;
    ptr++;
    cout<<"nombre: "<<ptr->Obtener_nombre()<<endl;
    cout<<"apellido: "<<ptr->Obtener_apellido()<<endl;
    cout<<"codigo: "<<ptr->Obtener_codigo()<<endl<<endl;
}


