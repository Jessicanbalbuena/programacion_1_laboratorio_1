#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define T 100
//VALOR ILOGICO
//CARGA ALATORIA


int main()
{
    int miVector[T] ;
    int suma;
    int opcion;

    inicializarVector (miVector, T);

    do
    {
        printf("1. Cargar\n2.Mostrar\n3.Sumar\n4.Salir\nEliga una opcion);
               scanf("%d" , opcion);
               switch (opcion)
           {
               case 1:  cargaVector(miVector, T);
               break;
               case 2:  mostrarVector (miVector, T);
               break;
               case 3: suma = sumarValores(miVector , T);
               printf("La suma es &d" , suma);
               break;

           }
               cargaVector(miVector, T);

               mostrarVector (miVector, T);

               suma = sumarValores(miVector , T);

               printf("La suma es: %d" , suma);

               return 0;
            }

           }while(opcion != 4)

