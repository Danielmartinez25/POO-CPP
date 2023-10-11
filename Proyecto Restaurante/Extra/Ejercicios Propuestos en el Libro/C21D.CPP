#include<stdio.h>
#include<stdlib.h>
int main() 
{ int fac, x=1;
  long res=1;
  system("cls");
  printf("Ingresa numero para calcular el factorial "); 
  scanf("%d",&fac); 
  for ( ;  ; ){
       if(x>fac) break;
       res=res*x;
       x++;
  }
  printf("El factorial de %d es: %ld  ", fac,res);
  system("pause");
}
