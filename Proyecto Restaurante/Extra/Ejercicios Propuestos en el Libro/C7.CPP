#include <stdio.h>
#include <stdlib.h>
int main()
{  int n;
   system("cls");
   printf("Ingrese un valor:");
   scanf("%d",&n);
   printf( (n%2 == 0) ? "Es par\n":"Es impar\n");
   //otra alternativa puede ser:
   //(n%2 == 0) ? printf("Es par\n"):printf("Es impar\n");
   system("pause");
   return 0;
}
