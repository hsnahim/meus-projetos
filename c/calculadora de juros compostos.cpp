#include <stdlib.h>
#include <stdio.h>
#include <float.h>

int main()
	{
	int capital=0, tempo=0, x=1, z=1, cem=100;
	float taxa=0;
	printf ("para calcular o juros compostos digite o valor do captal\n");
	scanf ("%i",&capital);
	printf ("digite a taxa de juros (em decimal)\n");
	scanf ("%f",&taxa);
	printf ("digite o tempo percorido\n");
	scanf ("%i",&tempo);
	printf ("\n");
	while (tempo>x)
	{
		capital=capital*taxa;
		printf ("%i",x);
		printf ("--");
		x=z+x;
		printf ("%i\n",capital);
	}
return 0;
}