#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define C 5

int main()
{


    /*eAlumno unAlumno;
    eAlumno otroAlumno;

    printf("\nUn Alumno\n");

    scanf("%s",unAlumno.nombre);


    printf("nombre[%s]\n",unAlumno.nombre);

    scanf("%d",&unAlumno.nota);

    printf("nota[%d]\n",unAlumno.nota);

    // int creacion y definicion

    printf("\nOtro Alumno\n");

    otroAlumno=unAlumno;//structura asignada a otra DUH!(cancion de billie Eish)
    //es una copia del otro, por ende modificar uno no altera al otro.

    printf("nombre[%s]\n",otroAlumno.nombre);

    printf("nota[%d]\n",otroAlumno.nota);*/


    eAlumno listadodeAlumnos[C];//definicion//[]cantidad de lugares

    int indice;

    //inicializarAlumnos(listadodeAlumnos,C,0);

    harcodeoAlumnos(listadodeAlumnos,C);

    mostrarAlumnos(listadodeAlumnos,C);

    //indice=buscarIndice(listadodeAlumnos,C);

    //printf("\n\nindice[%d]\n",indice);

    buscar_2_Legajo(listadodeAlumnos,C);

    borrarAlumnos(listadodeAlumnos,C);

    return 0;
}
