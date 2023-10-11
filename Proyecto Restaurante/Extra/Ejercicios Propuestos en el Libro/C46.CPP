#include <stdio.h>
#include <stdlib.h>
int esprimo(int num)
{  if (num==1 || num==2 || num==3) return 1;
   for (int i=2;i<=(num/2)+1 ; i++)
        if (num%i==0) return 0;
   return 1;
}
void main()
{ 
  system("cls");
  printf("lista de números primos entre 1 y 100: \n ");
  for (int i=1 ; i<=100 ; i++)
      if ( esprimo( i ) ) printf("%d\t",i);
  system("pause");
  }
