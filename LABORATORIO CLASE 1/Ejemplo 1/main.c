


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unNumero;
    float numero;
    char caracter;

    printf("Ingrese un numero: ");
    scanf("%d", &unNumero);
    printf("El numero que ingreso es: %d", unNumero);
    printf("\nIngrese un numero real: ");
    scanf("%f", &numero);
    printf("El numero que ingreso es: %f", numero);

    printf ("\nIngrese un caracter: ");
    fflush(stdin);
    scanf("%c", &caracter);
    printf("El caracter que ingreso es: %c" , caracter);






    //printf( "El numero es: %d, y el otro numero es: %f, y la letra es: %c\n" , unNumero, numero, caracter);
    return 0;
}
