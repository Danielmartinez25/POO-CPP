#include <stdio.h>
#include <stdlib.h>
int main()
{ int i, vector[10];
  system("cls");
  for(i = 0; i < 10; i++){
       printf("Ingresa el n£mero %d: ",i+1);
       scanf("%d",&vector[i]);
  }
  printf("\nlos n£meros pares ingresados son:\n");
  for(i = 0; i < 10; i++)
       if(vector[i]%2 == 0) printf("%d\t",vector[i]);
  printf("\nlos n£meros impares ingresados son:\n");
  for(i = 0; i < 10; i++)
       if(vector[i]%2 != 0) printf("%d\t",vector[i]);
  printf("\n");
  system("pause");
  return 0;
}
