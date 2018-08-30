#include <stdio.h>
#include <stdlib.h>

/**DECLARO EL PROTOTIPO ANTES DEL MAIN*/
void sumar (void);

int main()
{
    /**LLAMA A LA FUNCION*/
    sumar();
    return 0;
}

/**DESARROLLO LA FUNCION DESPUES DEL MAIN*/
void sumar(void){
int numeroUno, numeroDos, resultado;
    printf("SUMAR\n\n");
    printf("PRIMER NUMERO: ");
    scanf("%d", &numeroUno);
    printf("SEGUNDO NUMERO: ");
    scanf("%d", &numeroDos);
    //SUMAR
    resultado = numeroUno+numeroDos;
    printf("\nEL RESULTADO ES: %d", resultado);
}
