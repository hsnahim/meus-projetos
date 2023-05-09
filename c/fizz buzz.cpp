#include <stdlib.h>
#include <stdio.h>

int main()
{
	int x = 0;
	printf("escreva o valor para a verificação\n");
	scanf("%i", &x); // pegar o valor de x
	if (x % 2 == 0)
	{
		printf("fizz\n");
	}
	if (x % 3 == 0)
	{
		printf("buzz\n");
	}
	else if (x % 2 == 0 && x % 3 == 0)
	{
		printf("fizz buzz\n");
	}
	return 0;
}