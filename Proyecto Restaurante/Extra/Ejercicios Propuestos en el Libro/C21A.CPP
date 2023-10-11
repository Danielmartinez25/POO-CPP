#include<stdio.h>
#include<stdlib.h>
int main() 
{ int fac; 
  long res=1;
  system("cls");
  printf("Ingresa numero para calcular el factorial "); 
  scanf("%d",&fac); 
  for (int x=1;  x<=fac; x++) 
       res=res*x; 
  printf("El factorial de %d es: %ld ", fac,res);
system("pause"); 
}
