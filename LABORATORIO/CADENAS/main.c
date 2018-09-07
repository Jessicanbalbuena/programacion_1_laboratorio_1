#include <stdio.h>
#include <stdlib.h>
#include <string.h> //para manejo de cadenas

//cadenas - a traves de vectores de caracteres || %s
//gets para mostrar el nombre (recibe un puntero char)
int main()
{
    char nombre [15];
    int cantidad;
    strcpy(destino, origen)//recibe dos cadenas y pega la segunda en la primera
    printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(nombre);
    printf("%s" , nombre);


    cantidad = strlen(nombre); // contar la cantidad de caracteres que tiene la cadena

    printf("\nLa cantidad de caracteres es: %d", cantidad);

    return 0;
}
