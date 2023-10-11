#include <stdio.h> 
#include <conio.h> 
void main() 
{  int x, n1,n2,n3;
   float acum=0.0,p;
   clrscr(); 
   for(x=1;x<=5;x=x+1) {
	printf("\nIngrese notas del estudiante %d:\n",x);
	printf("Ingrese nota 1:"); scanf("%d",&n1);
	printf("Ingrese nota 2:"); scanf("%d",&n2);
	printf("Ingrese nota 3:"); scanf("%d",&n3);
        p=(n1+n2+n3)/3;
	printf("Promedio del estudiante: %2.2f\n",p); 
	acum=acum+(n1+n2+n3)/3;
   } 
   printf("El promedio general del curso es: %2.2f ",acum/5);
   getch(); 
}
