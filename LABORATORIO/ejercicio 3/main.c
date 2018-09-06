#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
    int miVector[T]; //variables escalares (guarda solamente un valor)
    int i;
    int aux;
    int flag = 0;
    for(i=0; i<5; i++)
    {
        printf("Ingese un numero: ");
        scanf("%d", &miVector[i]);

    }
    printf("Ingrese un numero a buscar : ");
    scanf("%d", &aux);

    for (i = 0; i <T; i++)
    {
        if(aux == miVector[i])//para que solo muestre los vectores pares
        {
            printf("Posicion %d\n", i);
        }
    }
    //miVector[2] = 158;
    //printf("%d" , (miVector[2]));

    return 0;


}

//para mostrar solo la primera vez que ocurre algo

int main()
{
    int miVector[T]; //variables escalares (guarda solamente un valor)
    int i;
    int aux;
    for(i=0; i<5; i++)
    {
        printf("Ingese un numero: ");
        scanf("%d", &miVector[i]);

    }
    printf("Ingrese un numero a buscar : ");
    scanf("%d", &aux);

    for (i = 0; i <T; i++)
    {
        if(aux == miVector[i])//para que solo muestre los vectores pares
        {
            flag = 1;
            printf("Posicion %d\n", i);
            break;
       }

       }

       if (falg == 0){
        print ("No se encontro el dato");
       }
    //para saber si en el programa encontro algo


    return 0;


}
