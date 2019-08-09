#include <stdio.h>

//PARA EJECUTAR EL PROGRAMA DEBEMOS DE IR A LA CARPETA Y EJECUTAR LO SIGUIENTE:
//1.    gcc 2suma.c -o 2suma.out
//2.    ./2suma.out

int main()
{
    int num1;
    int num2;
    int resultado;

    printf("Ingresar primer valor\n");
    //PARA LEER EL VALOR QUE INTRODUCE EL USUARIO NECESITAREMOS SCANF
    //SCANF TIENE DOS ARGUMENTOS; 
    //1.EL TIPO DE VALOR EN ESTE CASO ES ENTERO (INT) = %d->entero decimal
    //2.& EN EL SEGUNDO ARGUMENTO DEBEMOS DE INDICAR LA VARIABLE DONDE QUEREMOS QUE SE ALMACENE EL VALOR INTRODUCIDO POR EL USUARIO
    scanf("%d", &num1);

    printf("Ingresar segundo valor\n");
    scanf("%d", &num2);

    resultado = num1 + num2;

    printf("el resultado de la suma es: %d\n", resultado);
    return 0;
}