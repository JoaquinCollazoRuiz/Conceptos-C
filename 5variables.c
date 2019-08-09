#include <stdio.h>

int main()
{
char a = 'y'; 
//%c -> porque es un carácter
printf("%c\n", a);

int b = 2; 
//%i -> porque es un entero
printf("%i\n", b);

long c = 25563; 
//%li -> porque es un entero largo
printf("%li\n", c);
return 0;

float d = 22.623; 
//%f -> porque es un float
printf("%f\n", d);
return 0;

double e = 2223456.12345678; 
//%f -> porque es un float
printf("%f\n", e);

return 0; //TERMINA EL PROGRAMA
}