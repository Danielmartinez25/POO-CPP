#include <stdio.h>
#include <stdlib.h>
struct bindec{
       int binario[8];
       int dec;
};
void convierte(int n, struct bindec x[])
{ int  i, y, pos, aux;
  for( y=0; y<n; y++) 
       for ( i=0; i<8; i++) 
           x[y].binario[i]=0;
 for (y=0;y<n;y++){
       pos=0; aux=x[y].dec;
       while (aux>=2){
	x[y].binario[pos] = aux % 2;
	aux/=2;
	pos++;
         }
         x[y].binario[pos]=aux;
  }
}
void muestra (int n, struct bindec x[])
{  int y,i;
   for ( y=0; y<n; y++ ){
          printf("%d\t", x[y].dec); 
          for (i=7;i>=0;i--)  printf("%d\t", x[y].binario[i]);
         printf("\n");
    }
}

void main()
{ bindec lista[10];
   int i, num;
   system("cls");
   do{ printf("Ingrese n£mero de elementos a transformer (max 10): ");
       scanf("%d",&num);
}while (num<1 || num>10);
for( i = 0 ; i < num; i++){
     printf("Ingrese una cantidad entre 1 y 255: ");
     do{
       scanf("%d",&lista[i].dec);
    }while (lista[i].dec <1 || lista[i].dec >255);
}
convierte(num, lista);
muestra(num, lista);
system("pause");
}
