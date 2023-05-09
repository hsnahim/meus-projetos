#include <stdlib.h>
#include <stdio.h>
int main ()
{
    int x=2, y=4, alfa, massa, na;
    printf ("quantas particulas alfa sao produsidas\n(se nao tiver digite 1)\n");
    scanf ("%i",&alfa);
    system ("cls");
    printf ("qual a massa do atomo\n");
    scanf ("%i",&massa);
    system ("cls");
    printf ("qual o numero atomico\n");
    scanf ("%i",&na);
    system ("cls");
    na = na - x * alfa;
    massa = massa - 4 *alfa;
    printf ("numero atomico = %i\n",na);
    printf ("massa atomica = %i\n",massa);
    system ("pause");
    return 0;
}