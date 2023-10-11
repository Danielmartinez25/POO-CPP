 #include <stdio.h>
 #include <stdlib.h>
 struct ejemplo {
   int DIA;
   char *MES;
   int ANIO;
 };
 void main()
 { struct ejemplo fecha = {18,"Marzo",1973}, cumple;
   cumple = fecha;
   system("cls");
   printf("Fecha: %d de %s de %d\n",cumple.DIA,cumple.MES,cumple.ANIO);
   system("pause");
 }
