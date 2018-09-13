#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//**int main()
//{
// char cadena1 (10); //
//  char cadena2 [50] = "hola a todos, como estan? ;
//   strncpy(cadena1, cadena2, 9); //cadena destino, cadena de origen y cantidad de caracteres que van a copiar

//puts (cadena1);

// return 0;
//isspace te dice si un caracter es espacio o no

int main()
{
    char nombre[20];
    char apellido [20];
    char nombreCompleto[50] = " ";//para limpiar y que no quede basura
    char buffer [1000];
    int i;

    puts(" Ingrese su nombre: ");
    fflush(stdin);
    gets(nombre);

    while(strlen(buffer) > 19)
    {
        puts ("Reingrese su nombre: ");
        fflush(stdin);
        gets(buffer);

    }
    //descarga nombre en el buffer
    strcpy(nombre, buffer);


    puts(" Ingrese su apellido: ");
    fflush(stdin);
    gets(apellido);

    while(strlen(buffer) > 19)
    {
        puts ("Reingrese su apellido: ");
        fflush(stdin);
        gets(buffer);

    }
    strcpy(apellido, buffer);

    strcat(nombreCompleto, apellido);

    strcat(nombreCompleto, ", ");

    strcat(nombreCompleto, nombre);

    strlwr(nombreCompleto);

    for(i = 1; i < strlen(nombreCompleto); i++ )// para recorrer la cadena
    {
        if(isspace( nombreCompleto[i]))
        {
            nombreCompleto [i +1] = toupper (nombreCompleto[i+1]);

        }

       }


    puts(nombreCompleto);

    return 0;
}
