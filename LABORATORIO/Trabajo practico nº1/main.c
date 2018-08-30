#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//opcion puede ser char o int
int pedirNumero();
int main()
{
    int numero;
    numero = pedirNumero();
    printf("El numero ingresado es: %d", numero);
    char opcion;
    do
    {
        printf("(A)lta usuario\n");
        printf("(B)aja usuario\n");
        printf("(M)odificacion usuario\n");
        printf("Salir\n");
        printf("Elija una opcion\n");
        fflush(stdin); //para limpiar el buffer
        scanf("%c", &opcion);
        opcion = toupper(opcion); //toupper recibe un parametro y lo convierte en mayuscula

        switch(opcion)
        {
        case 'A':
            printf("Estoy dando de alta..\n");
            break;
        case 'B':
            printf("Estoy dando de baja..\n");
            break;
        case 'M':
            printf("Estoy modificanco..\n");
            break;
        }
        system("pause"); //Pausa la ejecucion en tiempo real
        system("cls"); //borra la consola
    }
    while(opcion || 'S');




    return 0;
}
int pedirNumero();
{

    int numero;
    printf("Ingrese un numero");
}
