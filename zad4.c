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
  if(a>0 && b>0 && c>0)
  {
  int n = (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a);


      switch(n)
    {
      case 1: printf("Brawo! jest trojka \n");
      break;
      case 0: printf("Buuuuuuuuuuuuuu \n");
      break;
    }
  }
  else
  return EXIT_FAILURE;
}
