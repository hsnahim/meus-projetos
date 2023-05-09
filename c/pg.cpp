#include <stdlib.h>
#include <stdio.h>


int main()
{
	int  x=0, y=0, z=0, q=0, pg=0;  
	printf("digite o valor para coemcar\n");
		scanf ("%i",&x);// pegar o valor do x
	printf("digite o q da pg\n");
		scanf ("%i",&q);
	printf("digite o valor para o fim\n");
		scanf ("%i",&y);//pegar o valor do y
	printf("\n");
	while (y>x-1)//emquanto a pg entiver dentro do y ira continuar
		{
		pg=x*q;
		z++;
		printf ("%i",z);
		printf ("--");
		printf ("%i\n",pg);
		x=pg;
		}
	printf("aqui esta sua pg \1");
system ("pause");
return 0;
}