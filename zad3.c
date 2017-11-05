#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a;
  int b;
  int c;

  printf("Podaj a:\n");
  scanf("%d",&a);

  printf("Podaj b:\n");
  scanf("%d",&b);

  printf("Podaj c:\n");
  scanf("%d",&c);
  int akwadrat=a*a;
  int bkwadrat=b*b;
  int ckwadrat=c*c;


  if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)

      printf("Trojka istnieje dla liczb: %d %d %d \n",a,b,c);

  else
     return EXIT_FAILURE;

}
