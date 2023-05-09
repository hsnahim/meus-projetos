#include <stdlib.h>
#include <stdio.h>

int main ()
{
	int x=0, y=0, z=0, fac=0;
	printf ("para calcular o factorial digite o numero que quer calcular\n");
	scanf ("%i",&z);
	while (y!=z-1){y=y+z-1;}
	while (x!=y)
	{
	x++;
	z=z*x;
	printf ("%i",x);
	printf ("--");
	printf ("%i\n",z);
	}
printf("\1 aqui esta seu factorial \1");
return 0;
}
