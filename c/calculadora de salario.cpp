#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x=0, y=0, z=0;
    {
    printf ("quanto voce ganha por hora\n");
    scanf ("%i",&x);
    printf ("quantas horas vc trabalha por dia\n");
    scanf ("%i",&y);
    z = x * y;
    printf ("esse e o seu salario total\n%i",z);
    }
return 0;
}
