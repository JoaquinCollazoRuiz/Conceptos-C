#include <stdio.h>

void cubo(int *n);
int main()
{
    //CREAMOS NUESTRA VARIABLE NUM CON VALOR 5
    int num = 5;
    //IMPRIMIMOS EL VALOR DE NUM
    printf("Valor original%i\n",num);
    //LUEGO LLAMAMOS A NUESTRA FUNCIÓN Y LE PASAMOS COMO VARIABLE NUM
    cubo(&num);
    printf("El nuevo Valor%i\n",num);
    return 0;
}

void cubo(int a)
{
    a = a * a * a;
}