#include <stdio.h>

int main()
{
    int contador = 1;

//PRIMERO EJECUTA EL DO ENTRA EN EL WHILE Y SI SE CUMPLE LA CONDICIÓN VUELVE AL DO
    do{
        printf("%i\n", contador);
        contador++;

    }while (contador <= 10);
    
    return 0;
}