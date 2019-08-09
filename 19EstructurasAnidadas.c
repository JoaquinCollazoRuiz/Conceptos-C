#include <stdio.h>
//Declaramos unas constante
#define length 2

struct owner
{
    char nombre[20];
    char direccion[30];
};
struct dog
{
    char nombre[20];
    int edadMeses;
    struct owner ownerDog;
}dogs[length];
int main()
{
    for (int i = 0; i < length; ++i)
    {
        printf("Nombre del perro:\n");
        scanf("%s",dogs[i].nombre);
        printf("Edad del perro en meses\n");
        scanf("%i",&dogs[i].edadMeses);
        printf("Nombre del Dueño\n");
        scanf("%s",dogs[i].ownerDog.nombre);
        printf("Dirección\n");
        scanf("%s",dogs[i].ownerDog.direccion);
        printf("\n");
    }

    for (int i = 0; i < length; i++)
    {
        printf("Nombre del perro es: %s\n", dogs[i].nombre);
        printf("edad del perro: %i\n", dogs[i].edadMeses)
        printf("El nombre del dueño es: %s\n", dogs[i].ownerDog.nombre);
        printf("La dirección es: %s\n", dogs[i].ownerDog.direccion);

    }
    return 0;
}
