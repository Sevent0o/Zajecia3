#include <stdio.h>
#include <stdlib.h>

int main()
{

int a;
int n;
printf("Podaj liczbę: ");
scanf("%d",&n);
if(n>0)
{
printf("Liczby od 1 do podanej to: ");
for (a=1;a<=n;a++){
  printf("%d ",a);}
  printf ("\n");
}
else
{
  printf("no chyba nie\n");
  return EXIT_FAILURE;
}


int c;
int d;
  printf("Podaj liczbę: ");
  scanf("%d",&d);
  if(d>0)
  {
  printf("Liczby od 1 kwadrat do podanej to: ");
  for (c=1;c<=d;c++){
    int ckwadrat=c*c;
    printf("%d ",ckwadrat);

        }
}
else
{
  printf("no chyba nie\n");
  return EXIT_FAILURE;
}
}
