#include <stdlib.h>
#include <stdio.h>

int main()
{
int y=10;
system ("MODE con cols=1680 lines=500");
system ("color 2");
    while (y==10)
    {
    printf ("%i",rand () %2);
    }
system ("pause");
}
