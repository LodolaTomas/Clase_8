

typedef struct{//defino tipos de datos

    int legajo;
    char nombre[50];
    int nota;
    int isEmpy;//'0' para no, '1' para esta vacio


}eAlumno;//identificar que es una esctructura

void inicializarAlumnos(eAlumno listaDeAlumnos[],int cantidad,int inicializo);
void harcodeoAlumnos(eAlumno listaDeAlumnos[],int cantidad);
void mostrarAlumnos(eAlumno listaDeAlumnos[],int cantidad);
void mostrarAlumno(eAlumno alumno);
int buscarIndice(eAlumno listaDeAlumnos[], int cantidad);
int buscar_1_Alumno(eAlumno listaDeAlumnos[],int cantidad);
int buscar_2_Legajo(eAlumno listaDeAlumnos[],int cantidad);

//borrar es logico no fisico.
void borrarAlumnos(eAlumno listaDeAlumnos[],int cantidad);
