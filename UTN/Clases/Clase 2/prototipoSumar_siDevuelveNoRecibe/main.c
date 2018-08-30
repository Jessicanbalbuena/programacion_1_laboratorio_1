#include <stdio.h>
#include <stdlib.h>

/**DECLARO EL PROTOTIPO ANTES DEL MAIN*/
int sumar (void);

int main()
{
    int resultado;
    resultado = sumar();

    printf("\nEL RESULTADO ES: %d", resultado);
    return 0;
}

/**DESARROLLO LA FUNCION DESPUES DEL MAIN*/
int sumar (void){

    int numeroUno, numeroDos, resultado;
    printf("SUMAR\n\n");
    printf("PRIMER NUMERO: ");
    scanf("%d", &numeroUno);
    printf("SEGUNDO NUMERO: ");
    scanf("%d", &numeroDos);
    //SUMAR
    resultado = numeroUno+numeroDos;

/**COMO LA FUNCION DEVUELVE Y NO RECIBE PARAMETROS DESPUES DE EJECUTAR Y OBTENER EL RESULTADO
   DEVUELVO EL VALOR CON EL RETORNO*/

    return resultado;
}
