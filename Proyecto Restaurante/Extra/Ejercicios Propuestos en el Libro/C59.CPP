#include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  struct ingreso{
	int HT;
	float VH;
	float comi;
   };
  struct egreso{
	int dia,mes,anio;
	float valor;
  };
  struct jornalero{
	char nombre[30];
	struct ingreso sueldo;
	egreso anticipo;
  };
  void main()
  { jornalero jose;
    system("cls");
    printf("Ingrese Nombre: "); gets(jose.nombre);
    printf("Ingrese horas trabajadas: "); scanf("%d",&jose.sueldo.HT);
    printf("Ingrese valor de hora: "); scanf("%f",&jose.sueldo.VH);
    printf("Ingrese comisión: "); scanf("%f",&jose.sueldo.comi);
    printf("DATOS DE ANTICIPO:\n");
    printf("Ingrese dia: "); scanf("%d",&jose.anticipo.dia);
    printf("Ingrese mes: "); scanf("%d",&jose.anticipo.mes);
    printf("Ingrese año: "); scanf("%d",&jose.anticipo.anio);
    printf("Ingrese valor del anticipo: "); scanf("%f",&jose. anticipo.valor);
    system("cls");
    printf("Nombre: %s\n",jose.nombre);
    printf("Horas trabajadas: %d\n",jose.sueldo.HT);
    printf("Valor de hora: %6.2f\n",jose.sueldo.VH);
    printf("Comisión: %6.2f\n",jose.sueldo.comi);
    printf("TOTAL DE INGRESOS:%6.2f\n", (jose.sueldo.HT* jose.sueldo.VH)+ jose.sueldo.comi);
    printf("Fecha de anticipo: %d/%d/%d\n", jose.anticipo.dia, jose.anticipo.mes, jose.anticipo.anio);
    printf("Valor del anticipo: %6.2f\n",jose.anticipo.valor);
    printf("TOTAL RECIBIR:%6.2f\n", ((jose.sueldo.HT*jose.sueldo.VH)+jose.sueldo.comi)-jose.anticipo.valor);
    system("pause");
  }
