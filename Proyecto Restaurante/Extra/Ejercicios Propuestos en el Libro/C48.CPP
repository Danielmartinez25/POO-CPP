#include <stdio.h>
#include<conio.h>
void soloint(int *num);
void main(){
 int a,b,h;
 clrscr();
 printf("Ingrese la base:");soloint(&b);
 printf("Ingrese la altura:");soloint(&h);
 a=b*h;
 printf("El  rea es: %d",a);
 getch();
}

void soloint(int *num)
{ int tecla, limi=wherex();
  *num=0;
  do{ tecla=getch();
     if (tecla>=48 && tecla<=57){ 
	      printf("%d",tecla-48); //calcula y muestra el digito presionado
	      *num = *num *10 + tecla-48; //almacena el caracter presionado
	      }
      if (tecla==8 && limi<wherex()){
		   *num = *num / 10;
		   printf("\b \b");
      }
  }while(tecla!=13); //repite mientras tecla sea diferente de ENTER
  printf("\n");
 }
