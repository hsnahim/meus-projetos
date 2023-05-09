#include <stdlib.h>
#include <stdio.h>

main ()
{
    
int forma, pi, π, h, b, x, y, z, l, l1, l2, l3, l4, d, D, L, B, r ,i ,calcular, regular, metodo, tipos;
float aprox=3.14 ,decimal;
printf ("o que voce quer calcular hoje digite o numero corespondente a isso\narea=1\nperimetro=2\n");
scanf ("%i",&calcular);
system ("cls");
if (calcular==1)
{
printf ("para calcular a area de uma figura digite o numero corespondente a esta\ntriangulo=1\nquadrado=2\nlosango=3\nretangulo=4\ntrapesio=5\ncirculo=6\n");
scanf ("%i",&forma);
system ("cls");
if (forma==1)
{
    printf ("para calcular a area de um triangulo escreva o valor de h\n");
        scanf ("%i",&h);
    printf ("escreva o valor da base\n");
        scanf ("%i",&b);
    x = h * b;
    y = x/2;
    printf ("essa e a area do triangulo\n%i",y);
    printf ("\n");
}
else if (forma==2)
{
    printf ("para calcular a area do quadrado escreva o valor do lado\n");
    scanf ("%i",&l);
    x = l * l;
    printf ("essa e a area do quadrado\n%i",x);
    printf ("\n");
}
else if (forma==3)
{
    printf ("para calcular a area de losango escreva o valor da base menor ou b\n");
    scanf ("%i",&d);
    printf ("escreva o valor da base maior ou B\n");
    scanf ("%i",&D);
    x = D * d;
    y = x/2;
    printf ("essa e a area do losango\n%i",y);
    printf ("\n");
}
else if (forma==4)
{
    printf ("para calcular a area de retangulo escreva o valor do lado menor\n");
        scanf ("%i",&l);
    printf ("escreva o valor do lado maior\n");
        scanf ("%i",&L);
    y = L * l;
    printf ("essa e a area do retangulo\n%i",y);
    printf ("\n");
}
else if (forma==5)
{
    printf ("para calcular a area de um trapezio escreva o valor da altura\n");
    scanf ("%i",&h);
    printf ("escreva o valor da base menor\n");
    scanf ("%i",&b);
    printf ("escreva o valor da base maior\n");
    scanf ("%i",&B);
    x = B + b;
    y = x * h;
    z = y/2;
    printf ("essa e a area do trapezio\n%i",z);
    printf ("\n");
}
else if (forma==6)
{
    printf ("para calcular a area de uma circunferencia digite o raio\n");
    scanf ("%i",&r);
    y = r * r;
    printf ("voce quer que seja considerado de pi\n1=3.14\n2=3\n3=pi\n");
    scanf ("%i",&i);
    if (i==1)
    {
    decimal = aprox * y;
    printf ("aqui esta a area da circumferencia\n%f",decimal);
    }
    else if (i==2)
    {
    x = 3 * y;
    printf ("aqui esta a area da circumferencia\n%i",x);
    }
    else if (i==3)
    {
    printf ("aqui esta a area da circumferencia\n%i",y);
    printf ("pi");
    }
}
}
else if (calcular==2)
{
    printf ("para calcular o perimetro de uma figura digite o numero corespondente a esta\ntriangulo=1\nquadrado=2\nlosango=3\nretangulo=4\ntrapesio=5\ncirculo=6\n");
    scanf ("%i",&forma);
    system ("cls");
    if (forma==1)
    {
    printf ("o tringulo e regular?\nsim=1\nnao=2\n");
    scanf ("%i",&regular);
    if (regular=1)
    {
    printf ("qual o valor do lado\n");
    scanf ("%i",&l);
    x = l * 3;
    printf ("aqui esta o perimetro do triangulo\n%i",x);
    }
    else if (regular=2)
    {
    printf ("qual o valor do lado 1");
    scanf ("%i",&l1);
    printf ("qual o valor do lado 2");
    scanf ("%i",&l2);
    printf ("qual o valor do lado 3");
    scanf ("%i",&l3);
    x = l1 + l2 + l3;
    }
    }
    else if (forma==2)
    {
    printf ("qual o valor do lado do quadrado\n");
    scanf ("%i",&l);
    x = l * 4;
    printf ("aqui esta o perimetro do quadrado\n%i",x);
    }
    else if (forma==3)
    {
    printf ("qual o valor do lado do losango\n");
    scanf ("%i",&l);
    x = l * 4;
    printf ("aqui esta o perimetro do losango\n%i",x);
    }
    else if (forma==4)
    {
    printf ("qual o valor dos lados maiores do retangulo\n");
    scanf ("%i",&l1);
    printf ("qual o valor dos lados menores do retangulo\n");
    scanf ("%i",&l2);
    x = l2 * 2 * l1 * 2;
    printf ("aqui esta o valor do perimetro do retangulo\n%i",x);
    }
    else if (forma==5)
    {
    printf ("qual o valor da base maior do trapesio\n");
    scanf ("%i",&B);
    printf ("qual o valor da base menor do trapesio\n");
    scanf ("%i",&b);
    printf ("qual o valor do par de lados paralelos do trapesio\n");
    scanf ("%i",&l);
    x = B + b + l * 2;
    printf ("aqui esta o valor do perimetro do trapesio\n%i",x);
    }
    else if (forma==6)
    {
    printf ("qual o raio do circulo\n");
    scanf ("%i",&r);
    printf ("voce quer que seja considerado de pi\n1=3.14\n2=3\n3=pi\n");
    scanf ("%i",&i);
    if (i==1)
    {
    decimal = 2 * aprox * r;
    printf ("aqui esta o perimetro da circumferencia\n%f",decimal);
    }
    else if (i==2)
    {
    x = 2 * 3 * r;
    printf ("aqui esta o perimetro da circumferencia\n%i",x);
    }
    else if (i==3)
    {
    x = 2 * r;
    printf ("aqui esta o perimetro da circumferencia\n%i",x);
    printf ("pi");
    }
}
}
printf ("\n");
printf ("\n");
system ("pause");
}