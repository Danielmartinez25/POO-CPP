#include <stdio.h>
#include <stdlib.h>
void main()
{  int hijos, horasT, valorH;
   system("cls");
   printf("Ingrese el n£mero de hijos: "); scanf("%d",&hijos);
   printf("Ingrese el n£mero de horas trabajadas: "); scanf("%d",&horasT);
   printf("Ingrese el valor de horas trabajadas: "); scanf("%d",&valorH);
   switch(hijos)
   {  case 1,2: printf("Num. Horas: %d valor horas: %d Incremento 10%%\n",horasT,valorH);
	printf("Sueldo: %6.2f \n",horasT*valorH*1.1);
	break;
       case 3: printf("Num. Horas: %d valor horas: %d Incremento 12%%\n",horasT,valorH);
	printf("Sueldo: %6.2f \n",horasT*valorH*1.12);
	break;
       case 4: printf("Num. Horas: %d valor horas: %d Incremento 15%%\n",horasT,valorH);
	printf("Sueldo: %6.2f \n",horasT*valorH*1.15);
	break;
       case 5,6,7,8: printf("Num. Horas: %d valor horas: %d Incremento 20%%\n",horasT,valorH);
	printf("Sueldo: %6.2f \n",horasT*valorH*1.2);
	break;
       default: printf("Num. Horas: %d valor horas: %d Incremento 0%%\n",horasT,valorH);
	printf("Sueldo: %6.2f \n",horasT*valorH);
	break;
}
system("pause");
}
