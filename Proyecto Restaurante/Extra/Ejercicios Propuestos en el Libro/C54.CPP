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
return "Error, d¡a incorrecto..!";
}
int extrae_dia( int Mes, int Dia, int anio) 
{  if(Mes >= 3) Mes -= 2;
          else Mes += 10;
   if( (Mes == 11) || (Mes == 12) )  anio--;
   int NumCenten = (anio / 100);
   int NumAnios = anio % 100;
   int ds = (2.6 * Mes - 0.2);
   ds +=  (Dia + NumAnios);
   ds += NumAnios / 4;	
   ds += (NumCenten / 4);
   ds -= (2 * NumCenten);
   ds %= 7;
   if(anio >= 1700 && anio <= 1751)  ds-=3;
      else { 
	 if(anio <= 1699)  ds-=4;
	}
  if(ds < 0) ds+=7;
  return ds;
}

void main()
{ int d, m, a, dia;
  char *ds;
  system("cls");
  printf("\nIngrese su fecha de nacimiento:\n");
  printf("\nIngrese el d¡a:");  scanf("%d",&d);
  printf("\nIngrese el mes:");  scanf("%d",&m);
  printf("\nIngrese el a¤o:");  scanf("%d",&a);
  dia=extrae_dia( m, d, a);
  ds= dia_semana (dia);
  printf("\nEl d¡a de nacimiento es:%s\n", ds);
  system("pause");
}
