#include <stdio.h>
#include <stdlib.h>
void main()
{  int opcion,a,b;
   system("cls");
   printf("Ingrese un n£mero: "); scanf("%d",&a);
   printf("Ingrese otro n£mero: "); scanf("%d",&b);
   printf("Seleccione:\n1. Sumar\n2. Restar\n3. Dividir\n4. Multiplicar\n");
   printf("Escriba el n£mero de la operaci¢n: ");
   scanf("%d",&opcion);
   switch(opcion)
   {	case 1:	printf("%d + %d = %d\n",a,b,a+b);
		break;
	case 2:	printf("%d - %d = %d\n",a,b,a-b);
		break;
	case 3:	printf("%d / %d = %d\n",a,b,a/b);
		break;
	case 4:	printf("%d x %d = %d\n",a,b,a*b);
		break;
	default:printf("Opci¢n no valida\n");
		break;
	}
system("pause");
}
