#include <stdio.h>
#include <stdlib.h>

/**DECLARO EL PROTOTIPO ANTES DEL MAIN*/
void sumar (int,int);

int main()
{
    int numeroUno, numeroDos;

    printf("SUMAR\n\n");
    printf("PRIMER NUMERO: ");
    scanf("%d", &numeroUno);
    printf("SEGUNDO NUMERO: ");
    scanf("%d", &numeroDos);

    /**LLAMA A LA FUNCION Y LE PASA LOS PARAMETROS*/
    sumar(numeroUno, numeroDos);

    return 0;
}

/**DESARROLLO LA FUNCION DESPUES DEL MAIN*/

void sumar (int n1, int n2){
    int resultado;

    resultado = n1+n2;
    printf("\nEL RESULTADO ES: %d", resultado);
}
