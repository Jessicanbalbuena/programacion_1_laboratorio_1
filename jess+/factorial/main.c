#include <stdio.h>
#include <stdlib.h>
/** \brief calcula el factorial de un numero
 *
 * \param el numero
 * \param retorna el factorial
 * \return
 *
 */
int calcularFactorial(int);
int main()
{
    int numero;
    int factorial = 1;
    int i;
    printf("Ingrese un numero: "),
           scanf("%d", &numero);
    factorial = calcularFactorial(numero);
    printf("el factorial es: %d");
    for (i=numero ; i >= 1; i --)
    {
        factorial = factorial * 1;
    }
    printf("El factorial es: %d", factorial);

    return 0;
}
int calcularFactorial(int numero)
{
    int factorial;

    if (numero ==0);
    {
        factorial = 1;
    }
    else
    {
        factorial = numero * calcularFactorial(numero - 1);
    }



    return factorial;
}
