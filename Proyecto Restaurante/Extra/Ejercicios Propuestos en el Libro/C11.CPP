#include <stdio.h>
#include <stdlib.h>
void main()
{  int cantidad;
   float total=0;
   char tipo;
   system("cls");
   printf("Ingrese la calidad (A,B,C): "); tipo=getchar();
   printf("Ingrese el n£mero de sand¡as a comprar: "); scanf("%d",&cantidad);
   switch(tipo)
   {  case 'A','a':  if(cantidad>=10 && cantidad<=20)
				total=(cantidad*1.5)*0.95;
		     else if(cantidad>=21)
				total=(cantidad*1.5)*0.90;
			else
			       total=cantidad*1.5;
		    break;
       case 'B','b': if(cantidad>=10 && cantidad<=30)
				total=(cantidad*3.5)*0.93;
                     else if(cantidad>=31)
				total=(cantidad*3.5)*0.88;
            		  else 
                                total=cantidad*3.5;
		     break;
       case 'C','c': if(cantidad>=10 && cantidad<=50)
				total=(cantidad*5)*0.85;
                     else if(cantidad>=51)
				total=(cantidad*5)*0.82;
            		  else 
                                total=cantidad*5;
		     break;
       default: printf("Calidad incorrecta\n");
	        break;
}
printf("Total a cobrar: %6.2f \n",total);
system("pause");
}
