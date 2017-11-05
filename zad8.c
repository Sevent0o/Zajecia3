#include <stdio.h>
#include <stdlib.h>

int main()
{



//TU ROBIE FOREM
int a;
int silnia=1;
int x;
printf("Podaj liczbe do obliczenia silni: ");
scanf("%d",&a);
if(a>0){
for(x=1;x<=a;x++){
  silnia=silnia*x;
}
printf("Twoja silnia wynosi: %d \n",silnia);
}
else {
  printf("Zle dane!!!!!!!! \n");
    }

//TU ROBIE WHILE


int e=1;
int f;
int silnia2=1;
printf("Podaj liczbe do obliczenia silni: ");
scanf("%d",&f);
if(f>0){
while(e<=f){
silnia2=silnia2*e;
++e;
}
printf("Twoja silnia wynosi: %d \n",silnia2);
}
else {
  printf("Zle dane!!!!!!!!");
  return EXIT_FAILURE;
    }



}
