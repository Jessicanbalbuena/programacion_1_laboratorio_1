#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroInt;
    float numeroFloat;
    char unCaracter;

    printf("INGRESE NUMERO : ");
    scanf("%d", &numeroInt);
    printf("EL NUMERO ES: %d", numeroInt);

    printf("\n\nINGRESE NUMERO FLOAT : ");
    scanf("%f", &numeroFloat);
    printf("EL NUMERO ES: %f", numeroFloat);

    printf("\n\nINGRESE CARACTER : ");
    fflush(stdin); /**PARA WINDOWS*/
    /**setbuf(stdin,NULL); PARA WINDOWS Y LINUX*/
    scanf("%c", &unCaracter);
    printf("EL NUMERO ES: %c", unCaracter);

    return 0;
}
