#include <stdio.h>
#include <stdlib.h>

/**DECLARO EL PROTOTIPO ANTES DEL MAIN*/
int sumar (int,int);

int main()
{
    int numeroUno, numeroDos, resultado;
    printf("SUMAR\n\n");
    printf("PRIMER NUMERO: ");
    scanf("%d", &numeroUno);
    printf("SEGUNDO NUMERO: ");
    scanf("%d", &numeroDos);

    resultado = sumar(numeroUno, numeroDos);
    printf("\nEL RESULTADO ES: %d", resultado);

    return 0;
}

/**DESARROLLO LA FUNCION DESPUES DEL MAIN*/
int sumar (int n1, int n2){
    int resultado;
    resultado = n1 + n2;

return resultado; //RETORNA RESULTADO
}
