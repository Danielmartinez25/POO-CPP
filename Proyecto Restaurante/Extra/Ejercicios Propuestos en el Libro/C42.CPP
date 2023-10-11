#include <stdio.h>
#include <conio.h>
void main()
{ int f,c,tecla, Acarreo=0,r; 
  int binario[3][8];
  clrscr();
  for(f = 0; f < 2; f++){
       printf("\nIngrese el %d numero binario:\n",f+1);
       for(c = 0; c <= 7; c++){
            do{ tecla=getch(); } while(tecla<48 || tecla>49);
            binario[f][c]= tecla-48;
	    printf("%d",binario[f][c]);
      }
  }
  for(c = 7; c >= 0; c--) {
      r=Acarreo+ binario[0][c]+ binario[1][c];
      switch(r){
	case 0: binario[2][c]=0; Acarreo=0; break;
	case 1: binario[2][c]=1; Acarreo=0; break;
	case 2: binario[2][c]=0; Acarreo=1; break;
	case 3: binario[2][c]=1; Acarreo=1; break;
      }
   }
  for(f = 0; f < 3; f++){
     printf("\n");
     for(c = 0; c <= 7; c++)
	 printf("%d\t",binario[f][c]);
  }
  getch();
}
