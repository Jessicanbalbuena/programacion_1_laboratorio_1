#include <stdio.h>
#include <stdlib.h>
//VECTORES un array unidimensional|| se declara igual que cualquier variable con la diferencia que tenemos que decir la cantidad de elementos que tiene.
//Los vectores son finitos|| CARGA DE VECTORES: SECUENCIAL Y ALEATORIA:
//CARGA POR EXTENSION int miVector[5]={5, 9 , 3, 4 , 7} y {} para que se inicialice en cero
//mivector[i] direccion de memoria distinta

int main()
{
    int miVector[5]; //variables escalares (guarda solamente un valor)
    int i;
    for(i=0; i<5; i++)
    {
        printf("Ingese un numero: ");
        scanf("%d", &miVector[i]);

    }
    for (i = 0; i <5; i++)
    {
        if(miVector[i] %2 == 0)//para que solo muestre los vectores pares
        {
            printf("%d\n", miVector[i]);
        }
    }
    //miVector[2] = 158;
    //printf("%d" , (miVector[2]));

    return 0;


}
