#include <stdlib.h>
#include <stdio.h>
#include <iostream>

int main()
{
	int x=0, y=0, z=0, rep=0, resultado=0;
	printf ("para caucular a quantidade de anagramas de uma palavra digite o numero de letras\n");
	scanf ("%i",&z);
	printf ("digite se ha alguma letra repetida coloque o numero em factorial (se nao tiver coloque 0)\n");
	scanf ("%i",&rep);
	if (rep=0){rep=rep+1;}
	else (z!=0);
	{
	while (y!=z-1)
	{
	y=y+z-1;
	}
	while (x!=rep)
	{
	x++;
	z=z*x;
	}
}
	while (z!=z/rep){z=z/rep;}
	printf("%i",z);

return 0;
}