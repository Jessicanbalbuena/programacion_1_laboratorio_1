#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//1ro Pedir legajo
//2do recorrer el array de alumnos y luego pregunto por el legajo
//3ro
// variable de tipo estructura se pasa por valor
//estrucutras tienen la
typedef struct //van en el .h
{
    int legajo;
    char nombre[50];
    float promedio;

} eAlumno; //tipo de dato, no es una variable

void mostrarAlumno(eAlumno);


int main()
 { //por asignacion
     eAlumno miAlumno;
     printf("Ingrese legajo: ");
     scanf("%d" , &miAlumno. legajo);

     printf("Ingrese nombre: ");
     fflush(stdin);
     gets (miAlumno.nombre);

     printf("Ingrese promedio: ");
     scanf("%f", &miAlumno.promedio);

     mostrarAlumno(miAlumno);


    // miAlumno.legajo = 159;
     //strcpy(miAlumno.nombre, "Juan");
     //miAlumno.promedio = 4.5;


     //eAlumno miAlumno(eAlumno,"pepe",3.45);

    printf("%d--%s--%f" , miAlumno.legajo,miAlumno.nombre,miAlumno.promedio); //accedemos al campo con el punto


    return 0;
}

void mostrarAlumno(eAlumno,alumnoParametro)
{
    printf("%d"
}
