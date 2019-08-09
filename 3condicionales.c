#include <stdio.h>

// gcc 3condicionales.c -o 3condicionales.out
// ./3condicionales.out;

/*

    == x es igual que y     
    != x es diferente que y

    > x es mayor que y
    < x es menor que y

    >= x es mayor igual que y
    <= x es menor igual que y

*/

int main()
{

int edad;

printf("Introduce tu edad:\n");
// %d->entero   &edad->variable donde se guarda la info
scanf("%d", &edad);

    if (edad > 18)
    {
        printf("Felicidades, eres mayor de edad\n");
    }
    else if (edad == 17)
    {
        printf("Te queda poco para cumplir el requisito, vuelve en unos meses\n");
    }
    
    else
    {
        printf("Lo sentimos, pero no cumples con los requisitos\n");
    }
}