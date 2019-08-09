#include <stdio.h>

int main()
{
    int num = 0;
    while (num <= 7)
    {
        if (num == 2)
        {
            //EN CASO DE ENTRAR AQUÍ ROMPE EL WHILE ENTERO
            break;
        }
        printf("%i\n", num); 
        num++:
    }
    return 0;
}