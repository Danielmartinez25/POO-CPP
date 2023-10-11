#include <stdio.h>
#include <stdlib.h>
int main()
{ int f,c; 
  int matriz[7][7];
  system("cls");
  for(f = 0; f < 7; f++)
      for(c = 0; c < 7; c++)
            if (c<=f) matriz[f][c]= f+1;
            else matriz[f][c]= 0;

  printf("\nLa matriz ha generada es la siguiente:\n");
  for(f = 0; f < 7; f++){
            for(c = 0; c < 7; c++)
                    printf("%d\t",matriz[f][c]);
           printf("\n");
   }
  system("pause");
  return 0;
}
