#include <stdio.h>

//inicializamos la función , fijate en el orden de llamada
long Factorial(long numero);
int main()
{
    int numero;
    printf("Ingresa un número\n");
    scanf("%i", &numero);
    for (int i = 0; i <= numero; i++)
    {                   //LLamamos a la función
        printf("%ld\n",Factorial(i));
    }
    return 0;
}
//Creamos una función
long Factorial(long numero)
{
    if (numero <= 1)
    {
        return 1;
    }else
    {
        return(numero * Factorial(numero-1));
    }
}