#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
int i=1;
int suma=0;
printf("Podaj n: ");
scanf("%d",&n);
do {
suma=suma+i;
++i;

} while(i<=n);
printf("Suma wynosi: %d \n",suma);


}
