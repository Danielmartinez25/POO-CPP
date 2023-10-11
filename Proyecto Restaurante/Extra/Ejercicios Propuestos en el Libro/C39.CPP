#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{ int f,c; 
   double matriz[5][5];
  system("cls");
  for(c = 0; c < 5; c++){
       printf("Ingresa el numero fila 0 columna %d: ",c+1); 
       scanf("%lf",&matriz[0][c]);
  }
  for(f = 1; f < 5; f++)
      for(c = 0; c < 5; c++)
       matriz[f][c]= pow(matriz[f-1][c],2);

  printf("\nLa matriz ha generado lo siguiente:\n");
  for(f = 0; f < 5; f++){
	    for(c = 0; c < 5; c++)
		    printf("%6.0lf\t",matriz[f][c]);
           printf("\n");
   }
  system("pause");
  return 0;
}
