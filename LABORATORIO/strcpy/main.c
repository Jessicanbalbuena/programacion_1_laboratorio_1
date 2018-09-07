#include <stdlib.h>
#include <string.h> //para manejo de cadenas

//cadenas - a traves de vectores de caracteres || %s
//gets para mostrar el nombre (recibe un puntero char)
//origen donde esta guardado el dato || dato
int main()
{
    char nombre [15]="Alberto;
                     char otroNombre[200]="Pedro";
                     int cantidad;
                     //strcpy(origen, destino);
                     strcpy(nombre, otroNombre);//recibe dos cadenas y pega la segunda en la primera |

                     printf("%s" , nombre);


                     cantidad = strlen(nombre); // contar la cantidad de caracteres que tiene la cadena

                 printf("\nLa cantidad de caracteres es:
                     %d", cantidad);

                     return 0;
                 }

}
