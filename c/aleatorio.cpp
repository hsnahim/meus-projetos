#include <stdlib.h>
#include <stdio.h>

int main()
{
int y, x, t=1;
printf ("selesione um intervalo de zero ate um numero para calcular um numero aleatorio\n");
    scanf ("%i",&y);
printf ("digite quantos numeros quer sortiar\n");
scanf ("%i" ,&x);
    printf ("aqui estao seus numeros\n");
    while (t<=x)
    {
    printf ("%i  ",rand () %y);  
    t++;
    }
    printf ("\n");
    printf ("\n");
system ("pause");
}