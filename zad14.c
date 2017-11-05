#include <stdio.h>
#include <stdlib.h>
#include "time.h"
int main()
{
int n;
printf("Podaj liczbe maxymalna: \n");
scanf("%d",&n);

int random;
time_t t;

srand((unsigned) time(&t));
random = rand() % n;
printf("Losowanie z przedziału od 1 do %d daje nam:%d\n",n,random);
return EXIT_FAILURE;






}
