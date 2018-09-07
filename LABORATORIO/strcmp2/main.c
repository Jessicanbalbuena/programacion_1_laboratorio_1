#include <stdlib.h>
#include <string.h> //para manejo de cadenas

//cadenas - a traves de vectores de caracteres || %s
//gets para mostrar el nombre (recibe un puntero char)
//origen donde esta guardado el dato || dato
//strlwr()pasa todo a miniscula
int main()
{
    char nombre [15]="Alberto";
                     char Nombre[20]="Juan";
                     char otroNombre[20] ="Anibal";
                     int cantidad;
                     int compara;

                     strupr(otroNombre); //pasa a mayuscula la cadena
                     printf("%s" , otroNombre);

                     //printf("%s", nombre);

}
