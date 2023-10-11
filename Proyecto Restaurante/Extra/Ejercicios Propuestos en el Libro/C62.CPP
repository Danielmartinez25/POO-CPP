#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern unsigned _floatconvert;
#pragma extref _floatconvert
void main()
{ struct {
	char nombre[20];
	int edad, nota;
	float talla;
     } poli[100];
int i, num, sumedad=0, c=0;
system("cls");
printf("Ingrese el número de postulantes entre 1 y 100:");
do{    scanf("%d",&num);    }while(num<1 || num>100);
for( i=0 ; i < num ; i++){
    fflush(stdin);
    printf("\nIngrese nombre del postulante %d:",i+1);gets(poli[i].nombre);
    printf("Ingrese la edad :");scanf("%d",& poli[i].edad);
    printf("Ingrese la talla:");scanf("%f",& poli[i].talla);
    printf("Ingrese la nota :");scanf("%d",& poli[i].nota);
}
for( i=0 ; i < num ; i++){
    if (poli[i].nota == 10) {
	printf("Nombre: %s Talla:%6.2f  Edad:%d Nota:%d\n", poli[i].nombre, poli[i].talla, poli[i].edad, poli[i].nota);
	sumedad+= poli[i].edad; c++;
	    }
    else if (poli[i].nota >= 8 && poli[i].nota <= 9 && poli[i].edad < 23  ) {
	printf("Nombre: %s Talla:%6.2f  Edad:%d Nota:%d\n", poli[i].nombre, poli[i].talla, poli[i].edad, poli[i].nota);
	sumedad+= poli[i].edad; c++;
	    }
    else if (poli[i].nota == 7  && poli[i].talla > 180  ) {
	printf("Nombre: %s Talla:%6.2f  Edad:%d Nota:%d\n", poli[i].nombre, poli[i].talla, poli[i].edad, poli[i].nota);
	sumedad+= poli[i].edad; c++;
	    }
    }
   if(c) printf("Promedio de edades: %6.2f \n",float(sumedad/c));
   system("pause");
}
