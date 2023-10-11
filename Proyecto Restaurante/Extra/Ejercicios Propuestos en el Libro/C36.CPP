#include <stdio.h>
#include <stdlib.h>
int main()
{ int i, vector[10];
  int Pos,Comp,aux;
  system("cls");
  for(i = 0; i < 10; i++){
       printf("Ingresa el numero %d: ",i+1); 
       scanf("%d",&vector[i]);
  }
for (Pos=0 ; Pos < 9 ; Pos++)
   for (Comp=Pos+1 ; Comp < 10 ; Comp++) 
	  if (vector[Pos] > vector[Comp]) {
		     aux = vector[Pos];
		     vector[Pos] = vector[Comp];
		     vector[Comp] = aux;
                   }
  printf("\nlos números ordenados son:\n");
  for(i = 0; i < 10; i++)
       printf("%d\t",vector[i]);
  printf("\n");
  system("pause");
  return 0;
}
