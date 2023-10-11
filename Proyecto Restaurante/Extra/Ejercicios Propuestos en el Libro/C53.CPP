#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * dia_semana(int Num_dia) 
{  switch(Num_dia ) {
        case 0:  return "Domingo";
        case 1: return "Lunes";
        case 2: return "Martes";
	case 3: return "Mi‚rcoles";
	case 4: return "Jueves";
	case 5: return "Viernes";
	case 6: return "S bado";
       }
return "Error, d¡a incorrecto...!";
}
void main()
{ int dia;
  char *ds;
  system("cls");
  printf("\nIngrese un n£mero de d¡a (0=domingo ... 6=s bado):");
  scanf("%d",&dia);
  ds= dia_semana (dia);
  printf("\nEl d¡a es:%s\n", ds);
  system("pause");
}
