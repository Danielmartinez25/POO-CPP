#include <stdio.h>
#include <stdlib.h>
int main()
{ int vector[100];
  int max, encontrado, i;
  system("cls");
  printf("Ingresa el n£mero de elementos del vector\n");
  scanf("%d",&max);
  for(i = 0; i < max; i++){
	printf("Ingresa el n£mero %d: ",i+1);
	do {
	    scanf("%d",& vector[i]);
	    encontrado=0;
	    for(int b=0; b < i && encontrado==0; b++)
		if (vector[b]==vector[i]) encontrado=1;
	    if(encontrado) printf("N£mero repetido..! \nVuelva a ingresarlo: ");
	} while(encontrado);
  }
  system("cls");
  for(i = 0; i < max; i++) printf("%d \t", vector[i]);
  system("pause");
  return 0;
}
