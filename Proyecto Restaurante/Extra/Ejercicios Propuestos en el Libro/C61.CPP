  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  extern unsigned _floatconvert;
  #pragma extref _floatconvert
  struct ingreso{
	int HT;
	double VH;
	double comi;
   };
  struct egreso{
	int dia,mes,anio;
	double valor;
  };
  struct jornalero{
	char nombre[30];
	struct ingreso sueldo;
	egreso anticipo;
  };
  void main()
  { jornalero Jorna[50];
    int i,N;
    system("cls");
    printf("Ingrese el n£mero de jornaleros: ");
    do{ scanf("%d",&N); } while(N<1 || N>50);
    for( i=0; i<N; i++){
       printf("Datos del %d jornalero:\n ",i+1); fflush(stdin);
	printf("Ingrese Nombre: "); gets(Jorna[i].nombre);
	printf("Ingrese horas trabajadas: "); scanf("%d",&Jorna[i].sueldo.HT);
	printf("Ingrese valor de hora: "); scanf("%lf",&Jorna[i].sueldo.VH);
	printf("Ingrese comisi¢n: "); scanf("%lf",&Jorna[i].sueldo.comi);
	printf("DATOS DE ANTICIPO:\n");
	printf("Ingrese dia: "); scanf("%d",&Jorna[i].anticipo.dia);
	printf("Ingrese mes: "); scanf("%d",&Jorna[i].anticipo.mes);
	printf("Ingrese a¤o: "); scanf("%d",&Jorna[i].anticipo.anio);
	printf("Ingrese valor del anticipo: "); scanf("%lf",&Jorna[i]. anticipo.valor);
   }
    system("cls");
    for(i=0; i<N;i++){
	printf("\nNombre: %s\n",Jorna[i].nombre);
	printf("Horas trabajadas: %d\n",Jorna[i].sueldo.HT);
	printf("Valor de hora: %6.2lf\n",Jorna[i].sueldo.VH);
	printf("Comisi¢n: %6.2lf\n",Jorna[i].sueldo.comi);
	printf("TOTAL DE INGRESOS:%d\n", (Jorna[i].sueldo.HT* Jorna[i].sueldo.VH)+ Jorna[i].sueldo.comi);
	printf("Fecha de anticipo: %d/%d/%d\n", Jorna[i].anticipo.dia, Jorna[i].anticipo.mes, Jorna[i].anticipo.anio);
	printf("Valor del anticipo: %6.2lf\n",Jorna[i].anticipo.valor);
	printf("A RECIBIR:%6.2lf\n", ((Jorna[i].sueldo.HT*Jorna[i].sueldo.VH)+Jorna[i].sueldo.comi)-Jorna[i].anticipo.valor);
    }
    system("pause");
  }
