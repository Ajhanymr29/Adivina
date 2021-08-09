#include <stdio.h>
#include <string.h>

char psecr[15]="suculentas";
char pal[15];
int inten;

int main()
{
 printf("\tAdivine la palabra secreta: ");
 scanf("%s", &pal);

 for (inten=0; inten<3; inten++)
 {
 if (strcasecmp(pal, psecr) ==0)
 {
 printf("Adivinaste la palabra secreta!!");
 return 0;
 }

 else
 {
 printf("No es la palabra secreta. Intentalo nuevamente: ");
 scanf("%s", &pal);
 }
 }
  printf("\t\tSe agotaron tus intentos, GRACIAS POR PARTICIPAR!");
 }
