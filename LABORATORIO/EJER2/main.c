#include <stdio.h>
#include <stdlib.h>
//constante ocupa un lugar de memoria || evitamos el uso de constantes!
int main()
{
    int const T = 5; //ELEMENTO DE LA PROGRAMACION QUE ME PERMITE GUARDAR UN VALOR DURANTE EL SICLO DEL PROGRAMA QUE VA ADQUIRIENDO VALORES
    int miVector[T]; //variables escalares (guarda solamente un valor)
    int i;
    for(i=0; i<5; i++)
    {
        printf("Ingese un numero: ");
        scanf("%d", &miVector[i]);

    }
    for (i = 0; i <T; i++)
    {
        if(miVector[T] %2 == 0)//para que solo muestre los vectores pares
        {
            printf("%d\n", miVector[i]);
        }
    }
    //miVector[2] = 158;
    //printf("%d" , (miVector[2]));

    return 0;


}
