#include <stdio.h>
#include <stdlib.h>
int main()
{ int i, vector[10];
  system("cls");
  randomize();
  for(i = 0; i < 10; i++) vector[i]= rand()%101;
  printf("\nlos n£meros pares tomados son:\n");
  for(i = 0; i < 10; i++)
       if(vector[i]%2 == 0) printf("%d\t",vector[i]);
  printf("\nlos n£meros impares tomados son:\n");
  for(i = 0; i < 10; i++)
       if(vector[i]%2 != 0) printf("%d\t",vector[i]);
  printf("\n");
  system("pause");
  return 0;
}
