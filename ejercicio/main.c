#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    char respuesta;
    int acumPositivos = 0;
    int acumNegativos = 0;
    int contadorPositivos = 0;
    int contadorNegativos = 0;
    int contadorCeros = 0;
    int contPares = 0;
    float promedioPositivos;
    float promedioNegativos;
    int maximo;
    int flag = 0;


    do
    {

        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        if(numero>0)
        {
            acumPositivos = acumPositivos+numero;
            contadorPositivos ++;

            //acumPositivos+=numero;
        }
        else
        {
            if(numero<0)
            {
                acumNegativos+=numero;
                contadorNegativos ++;
            }

            else
            {
                contadorCeros ++;
            }
        }
        if(numero%2 == 0)
        {
            contPares++;
        }
        if(flag == 0 || numero>maximo)
        {
            maximo = numero;
            flag = 1;
        }



        fflush(stdin);
        printf("Desea agregar otro numero? s/n: ");
        scanf("%c", &respuesta);

    }

    while(respuesta == 's');
    promedioPositivos = (float)acumPositivos/contadorPositivos;

    printf("El acumulado de positivos es: %d\n", acumPositivos);
    printf("El acumulador de negativos es: %d\n", acumNegativos);
    printf("Cantidad de positivos es: %d\n", contadorPositivos);
    printf("Cantidad de negativos es: %d\n", contadorNegativos);
    printf("La cantidad de ceros es: %d\n", contadorCeros);
    printf("El contador de pares es: %d\n", contPares);
    printf("Promedio de positivos es: %.2f\n", promedioPositivos);
   printf("El maximo es %d\n", maximo);
    return 0;

}
