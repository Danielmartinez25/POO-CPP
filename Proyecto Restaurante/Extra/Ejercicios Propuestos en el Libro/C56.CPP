#include <stdio.h>
#include <stdlib.h>
void fibonacci_1a1()
{ static int anterior=0, actual=1, siguiente;
   siguiente = anterior + actual;
   printf("%d,",siguiente);
   anterior = actual;
   actual = siguiente;
}
void main()
{ system("cls");
   for (int i=1; i<=10; i++) fibonacci_1a1();
   system("pause"); 
}
