#include <stdlib.h>
#include <stdio.h>

int main ()
{
	int  x=0, y=0, z=0, q=0, pa=0;  
	
		printf("digite o valor para coemcar\n");
			scanf ("%i",&x);// pegar o valor do x
		printf("digite o q da pa\n");
			scanf ("%i",&q);
		printf("digite o valor para o fim\n");
			scanf ("%i",&y);//pegar o valor do y
		printf("\n");
	while (y>x)//emquanto a pa entiver dentro do y ira continuar
		{
		pa=x+q;
		z++;
		printf ("%i",z);
		printf ("--");
		printf ("%i\n",pa);
		x=pa;
		}
	printf("aqui esta sua pa");
system ("pause");
return 0;
}