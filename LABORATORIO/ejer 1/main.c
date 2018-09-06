#include <stdio.h>
#include <stdlib.h>
/** \brief incrementa en 10 el valor recibido
 *
 * \param int el valor sobre el que voy a incrementar
 *\return int [1] si el valor es mayor que 15 y [0] si no lo es
 *
 */

int miFuncion(int*);
int main()
{
    int miEntero;
    int estado = 3;
    estado = miFuncion(&miEntero);
    printf("El nuevo valor es: %d\n", miEntero);
    if (estado ==1)
    {
        printf("El valor es mayor a 15");
    }
    else
    {
        printf("El valor es menor o igual a 15");
    }
    return 0;
}
int miFuncion(int* pValor)//punteros. Int recibe una direccion de memoria
{
    int queDeVuelve = 0; //declarar el entero que retorne a la funcion .
    int aux;
    aux = (*pValor);

    aux +=  10; //para incrementar 10 a valor | con * devuelve el valor a que apunta la DM

    if(aux > 15)
    {
        queDeVuelve =  1;
    }

    (*pValor)  = aux;

    return queDeVuelve;
}
