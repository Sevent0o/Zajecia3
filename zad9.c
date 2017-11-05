#include <stdio.h>
#include <stdlib.h>

int main()
{

int i=1;
int n=-1;
int suma=1;
while(n<0){
printf("Podaj liczbe do obliczenia sumy: ");
scanf("%d",&n);
if(n>0){
for(i=1;i<=n;i++){
  suma=suma+i;
}
printf("Twoja suma liczb od i do n wynosi: %d \n",suma);
}
else {
  printf("Zle dane!!!!!!!! \n");
    }
  }


















}
