#include <stdio.h>
#include <conio.h>
int binario_decimal(int binario[])
{ int v=128, acum=0;
   for(int i = 0; i < 8; i++){ 
        if(binario[i]==1) acum+=v;
  	v/=2;
        }
   return acum;
}
void ingreso_binario(int binario[])
{ int tecla,i;
   for(i = 0; i < 8; i++){
            do{ tecla=getch(); } while(tecla<48 || tecla>49);
            binario[i]= tecla-48;
            printf("%d", binario[i]);
          }
 }
void main()
{ int i, tecla, res; 
  int vector[8];
  clrscr();
  printf("\nIngrese un n£mero binario:\n");
  ingreso_binario(vector);
  res=binario_decimal(vector);
  printf("\nEl decimal es:%d", res);
  getch();
}
