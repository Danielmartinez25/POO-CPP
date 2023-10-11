#include <stdio.h>
#include <stdlib.h>
int main()
{  int a,b,x,y;
   system("cls");
   a=10;
   b=a++;  //A la variable b se le asigna el valor de a; luego el valor de la variable a se incrementa en 1
   printf("Valor de a=%d y el valor de b=%d\n",a,b);
   x=10;
   y=++x;   //El valor de x es incrementado en 1 y luego este valor es asignado a la variable y
   printf("Valor de x=%d y el valor de y=%d\n",x,y);
   system("pause");
   return 0;
}
