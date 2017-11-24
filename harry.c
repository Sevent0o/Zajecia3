#include<stdio.h>
#define ROZMIAR 128

int main(void)
{
int c,i,j,k;

int znak[ROZMIAR];

for (i=0;i<ROZMIAR;i++)
  znak[i]=0;
printf("Tu podaje jakis tekst \n");
while((c=getchar())!=EOF)
    ++znak[c];
printf("\n");
printf("Oto moj histogram: \n\n");

printf("Znak Liczba Gwiazdki \n__________________________ \n");

for (i=0;i<ROZMIAR;i++)
{

    if(znak[i]>0)
{
    putchar(i);
    printf("    ");
}
//for na liczbe
for (k=0;k<znak[i];++k)
if(k=znak[i])
  printf("%d      ",k);
//for na gwiazdki
   for (j=0;j<znak[i];++j)
       putchar('*');
      if(j=znak[i])
        printf("\n");

}
  return 0;
}
