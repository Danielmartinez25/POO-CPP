#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int sec, hr, min;
    const int SegHora=3600;
    const int SegMin=60;
    system("cls");
    printf("Ingrese segundos: "); scanf("%d",&sec);
    hr = sec / SegHora;
    sec %= SegHora;
    min = sec / SegMin;
    sec %= 60;
    printf("Equivalecia:%d horas %d minutos %d segundos\n",hr,min,sec);
    system("pause");
    return 0;
}