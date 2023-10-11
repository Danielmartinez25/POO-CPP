#include <stdio.h>
#include <stdlib.h>
int main()
{ int i, vector[10];
  int Fijo,PosMenor,Comp,aux;
  system("cls");
  for(i = 0; i < 10; i++){
       printf("Ingresa el numero %d: ",i+1); 
       scanf("%d",&vector[i]);
  }
  for (Fijo=0; Fijo<10; Fijo++) {
       PosMenor= Fijo;
       for (Comp= Fijo+1; Comp<10; Comp++) {
    	if(vector[Comp]<vector[PosMenor]) PosMenor=Comp;
        }
       aux = vector[Fijo];
       vector[Fijo] = vector[PosMenor];
       vector[PosMenor] = aux;
  }
  printf("\nlos números ordenados son:\n");
  for(i = 0; i < 10; i++)
       printf("%d\t",vector[i]);
  printf("\n");
  system("pause");
  return 0;
}
