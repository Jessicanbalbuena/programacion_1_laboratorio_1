#include <stdio.h>
#include <stdlib.h>
//scanf("%[^\n] , nombre);
int main()
{
    char nombre[20];
    int cantidad;
    printf("Ingrese su nombre");
    fgets(nombre, 20, stdin);//para leer archivos
    puts(nombre); //se usa para mostrar las cadenas

     nombre [strlen(nombre)-1] = '\0';
     int cantidad = strlen(nombre);
     printf("Cantidad %d" , cantidad);
    return 0;
}
