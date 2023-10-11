#include <stdio.h>
#include <stdlib.h>
void siguientepar(int *num)
{  *num = (*num%2==0)? *num+2 : *num+1;
}
void main()
{ int x;
  system("cls");
  printf("Ingrese un n£mero y mostrará el siguiente par: "); scanf("%d",&x);
  siguientepar( &x );
  printf("%d\n",x);
  system("pause");
}
