#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getInt(char mensaje[], char mensajeError[], int intentos, int maximo, int minimo);
int GetIntEntreMinMax(char mensaje[], int resultado, int maximo, int minimo);
int main()
{
    int edad = getInt("Ingrese su edad", "no es una edad validad", 1, 100,1);
    int temperatura = getInt("Ingrese una temperatura", "no es una temperatura valida", 1,100,1);
    return 0;
}
 /** \brief
 * getint()
 * \param mensaje [] char mensaje de pedido de
 * \param mensajeError [] char mensaje de error
 * \param intentos int cantidad de posibilidades
 * \param maximo int el maximo numero posible
 * \param minimo int el minimo numero posible
 * \return int numero entero
 *
 */
int getInt(char mensaje[], char mensajeError[], int intentos, int maximo, int minimo)
{
    int retorno = 0;
    do{
        printf("%s", mensaje);
        scanf("%d", &retorno);
        if(retorno<= maximo && retorno>=minimo);
        {
            break;
        }
     printf("%s", mensajeError);
        intentos --;
    } while (intentos>0);
    return retorno;
}// fin getInt

int GetIntEntreMinMax(char mensaje[], int resultado, int maximo, int minimo);
void saludar (void);
int cambiar (int *dato);
int main()
{inr respuesta;
int sueldo;
respuesta = GetIntEntreMinMax("ingrese sueldo", 9000, 3000)
if (respuesta==0)
{printf(("sueldo correcto: &d, sueldo");
} else {
printf("te fallo");
} else (respuesta < 0)
{
    printf("te pasaste");
}
}
return 0;
}

int GetIntEntreMinMax(char mensaje [], int )




