#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int resp;
  printf("       ______           ______\n");
  printf("      /      \\         /      \\\n");
  printf("     /        \\       /        \\\n");
  printf("    /          \\     /          \\\n");
  printf("   /            \\___/            \\\n");
  printf("  |                               |\n");
  printf("   \\                             /\n");
  printf("    \\                           /\n");
  printf("     \\                         /\n");
  printf("      \\                       /\n");
  printf("       \\                     /\n");
  printf("        \\                   /\n");
  printf("         \\                 /\n");
  printf("          \\               /\n");
  printf("           \\             /\n");
  printf("            \\           /\n");
  printf("             \\         /\n");
  printf("              \\       /\n");
  printf("               \\     /\n");
  printf("                \\   /\n");
  printf("                 \\ /\n");
  printf("                  -\n");
  printf("Alice voce aceitaria sair com migo\n1=sim\n2=nao\n");
  scanf("%d",&resp);
  if (resp == 1)
  {
    printf("muitissimo obrigado por tem me feito uma pessoa mais felis hoje\n\n");
  }
  else if (resp==2)
  {
    printf("ok quem sabe outro dia\n\n");
  }
  else
  {
    printf("ERRO\n\n");
  }
  system ("pause");
}