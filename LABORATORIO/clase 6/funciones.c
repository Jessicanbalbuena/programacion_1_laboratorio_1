#ifndef FUNCIONES_C_INCLUDED
#define FUNCIONES_C_INCLUDED
#endif // FUNCIONES_C_INCLUDED
#include "funciones.h"
#include <stdio.h>

void cargaVector (int vector [], int tam)
{
    char seguir;
    int posicion;
    do
    {
        print("\nIngrese posicion: ");
        scanf("%d", &posicion);
        printf("\nIngrese un valor: ");
        scanf("%d", &vector [posicion - 1]); //para que no se desborde el vector ya que el vector va de 0/x

        printf("Desea continuar con el ingreso? ");
        fflush(stdin);
        scanf("%c", &seguir);
    }
    while (seguir== 's');
}


void mostrarVector (int vector [], int tam); //valor ilogico (-1)
{
    int i;

    for (i=0; i < tam; i++)
    {
        if(vector[i] != -1)
        {
            printf("%d\n", vector[i]);
        }

    }
}


void inicializarVector (int vector [], int tam);
{
    int i;
    for (i = 0; i <T; i++)
    {
        miVector[i] = -1;
    }
}



void sumarValores (int [], int tam);
{
    int acumulador = 0;
    for(i=0; i < tam; i++)
    {
       if (vector [i] != -1)
       {
           acumulador = acumulador + vector[i];
       }

    }
    return acumulador;
}




