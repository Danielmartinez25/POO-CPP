#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main()
{ char menu[5][15]={"Sumatoria","Sustracci¢n","Multiplicaci¢n","Divisi¢n","Salir"};
  int tecla,col=2,i,indice=0;
  int a,b;
  clrscr();
  //proceso de imprimir el menu en pantalla
  for (i=0;i<5;i++){
	gotoxy(col,2);cprintf("%s",menu[i]);
	col+=15;}
  col=2;i=1;
  //Proceso de controlar el movimiento
   do{
      do{_setcursortype(_NOCURSOR);
	 textbackground(6);
	 gotoxy(col,2);cprintf("%s",menu[indice]);
	 tecla=getch();
      }while(tecla!=77 && tecla != 75 && tecla!=13);
      textbackground(0);
      gotoxy(col,2);cprintf("%s",menu[indice]);
   //Proceso de chequear la tecla presionada
      switch(tecla){
      case 77: if (indice==4){col=2;indice=0;}
	       else {col+=15;indice++;}
	       break;
      case 75: if (indice==0){col=62;indice=4;}
	       else {col-=15;indice--;}
	       break;
      case 13: _setcursortype(_NORMALCURSOR);
	       if (indice==0){gotoxy(10,10);printf("Ingrese un número:");scanf("%d",&a);
                              gotoxy(10,11);printf("Ingrese otro número:");scanf("%d",&b);
                              gotoxy(10,12);printf("La sumatoria da:%d\n",a+b);
			      gotoxy(10,13);system("pause");
			      gotoxy(10,10);printf("                                  ");
                              gotoxy(10,11);printf("                                  ");
			      gotoxy(10,12);printf("                                  ");
			      gotoxy(10,13);printf("                                  ");
                             }
	       if (indice==1){}
	       if (indice==2){}
	       if (indice==3){}
	       if (indice==4) i=0;
      }
   }while(i);
   }
