#include <stdio.h>
#include <stdlib.h>
int main(){
char cadena[50];
int a;
system("cls");
printf("Ingrese un entero: "); scanf("%d",&a);
fflush(stdin);
printf("Ingrese otra cadena: "); gets(cadena);
printf("El entero ingresado es:%d\n",a);
printf("La cadena ingresada es:"); puts(cadena);
system("pause");
return 0;
}
