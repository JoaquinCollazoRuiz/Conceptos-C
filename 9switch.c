#include <stdio.h>

int main()
{
    int casos;
    printf("Ingresa un valor\n");
    scanf("%i", &casos);

    switch (casos)
    {
    case 1:
        printf("Ingresaste valor == 1\n");
        break;
    
    default:
        printf("Ingresaste valor != 1\n");
        break;
    }
    return 0;
}