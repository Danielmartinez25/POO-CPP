#include <stdio.h>
#include <stdlib.h>
int main()
{ int i, cd,cai, vector[10];
  int temp,Izq,Der,Medio;
  system("cls");
  for(i = 0; i < 10; i++){
       printf("Ingresa el numero %d: ",i+1); 
       scanf("%d",&vector[i]);
  }
  for (cai=1 ; cai<10; cai++) {
  	temp = vector[cai];
  	Izq = 0;
  	Der = cai-1;
  	while (Izq <= Der){
    	       Medio = (Izq+Der)/2;
    	       if (temp < vector[Medio]) Der = Medio - 1;
    	       else Izq = Medio + 1;
  	}
  	for (cd =cai-1; cd >=Izq; cd--){
    	      vector[cd+1]= vector[cd];
  	}
  	vector[Izq] = temp; 
  }
  printf("\nlos números ordenados son:\n");
  for(i = 0; i < 10; i++)
       printf("%d\t",vector[i]);
  printf("\n");
  system("pause");
  return 0;
}
