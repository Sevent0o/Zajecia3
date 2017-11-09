//zadanie 16 - dodatkowe na laborki z programowania C
#include <stdio.h>
#include <stdlib.h>
#include "time.h"

int main()
{
int n;
printf("Podaj Liczbe n: \n");
scanf("%d",&n);
while(n<=0)
{
  printf("Liczba nienaturalna! Jeszcze raz! Podaj liczbe\n");
  scanf("%d",&n);
}
int random;
time_t t;
srand((unsigned) time(&t));
random = rand() % n;
int zgadujemy;
printf("Sprobuj podac liczbe wylosowana przez komputer, Podaj liczbe:\n");
scanf("%d",&zgadujemy);
while(zgadujemy!=random)
  {
    while(zgadujemy<=0)
    {
    printf("Podales liczbe nienaturalna! Jeszcze raz! Podaj liczbe\n");
    scanf("%d",&zgadujemy);
    }


  if(zgadujemy>random)
    {
      printf("Podales za duza liczbe, sprobuj jescze raz! Podaj liczbe\n");
      scanf("%d",&zgadujemy);

    }
  else
    {
      printf("Podales za mala liczbe, sprobuj jescze raz! Podaj liczbe\n");
      scanf("%d",&zgadujemy);
    }
  }

  printf("BRAWOOOOOO!!!!!!!!!!! ODGADLES LICZBE WYLOSOWANA PRZEZ KOMPUTER\nTa liczba to: %d\n",zgadujemy);

return EXIT_FAILURE;
}
