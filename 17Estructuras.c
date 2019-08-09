#include <stdio.h>
struct perro
{
    char nombre[30];
    int edadMeses;
    float peso;
}perro1={"Toby",10,3.50};

int main()
{
    printf("El peso de: %s es %.2f Kg y tiene &i meses\n",perro1.nombre,perro1.peso, perro1.edadMeses);
    return 0;
}
