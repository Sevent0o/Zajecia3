#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,m,a,b;
char znak='*';
printf("Podaj ilosc wierszy: ");
scanf("%d",&n);
printf("Podaj ilosc kolumn: ");
scanf("%d",&m);
if(n>0 && m>0)
{
for (a=1;a<=m;a++)
  {
    for(b=1;b<=n;b++)
      {
      putchar(znak);
      }
printf("\n");
  }
}
else {
  printf("Zle dane!!!!!!!!");
  return EXIT_FAILURE;
}




}
