#include <stdio.h>
#include <conio.h>
main() 
{  clrscr();  
    int Num,ContDigP=0, ContDigI=0;
    printf("Ingrese una cantidad cualquiera:"); scanf("%d",&Num); 
    while (Num>0) {
    if((Num%10)%2==0) ContDigP++;
    else ContDigI++;
    Num/=10;
    }
 printf("Existen %d d¡gitos pares y %d d¡gitos impares", ContDigP, ContDigI);
 getch();
 return 0;
} 
