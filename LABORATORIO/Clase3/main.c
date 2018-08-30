#include <stdio.h>
#include <stdlib.h>
//forma mal hecha
//void sumar (void);
//int main()
//{
  //  sumar();
    //return 0;
//}
//void sumar (void)
//{
  //  int numero1;
   // int numero2;
    //int sumar;
    //printf("Ingrese un numero: ");
    //scanf("%d", &numero1);
   // printf("Ingrese otro numero: ");
    //scanf("%d", &numero2);

   // sumar = numero1 + numero2;
    //printf("El resultado es: %d", sumar);
//}

//otra forma de hacerlo
void sumar (void);
int main()
{
    int numero1;
    int numero2;
    printf("Ingrese un numero: ");
    scanf("%d", &numero1);
    printf("Ingrese otro numero: ");
    scanf("%d", &numero2);
    sumar(numero1, numero2);
    return 0;
}
void sumar (void)
{

    int sumar;

    sumar = numero1 + numero2;
    printf("El resultado es: %d", sumar);
}



