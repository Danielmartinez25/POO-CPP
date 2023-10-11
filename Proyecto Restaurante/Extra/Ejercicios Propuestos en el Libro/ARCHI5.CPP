#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
struct censo
{ char ciudad[30];
  int TotalH;
  int TotalM;
};
main()
{ FILE *pa;
  char bc[30];
  int opc;
  censo poblacion;
  do{ system("cls");
         printf("<1> Agregar nueva linea\n<2> Mostrar lineas grabadas:\n");
         printf("<3> Buscar ciudad\n<4> Salir\nSeleccione su opcion:\n");
         do{ opc=getch(); }while(opc!=49 && opc!=50 && opc!=51 && opc!=52);
         switch(opc){   
         case 49: pa = fopen("Conteo.txt","a+b");
                       fflush(stdin);        	
	       printf("Nombre de la ciudad: ");gets(poblacion.ciudad);
      	       printf("Total de hombres   : ");scanf("%d",&poblacion.TotalH);
      	       printf("Total de mujeres   : ");scanf("%d",&poblacion.TotalM);
	       fwrite(&poblacion,sizeof(censo),1,pa);
                       fclose(pa);
                       break;
         case 50: pa = fopen("Conteo.txt","rb");
	       printf("\tCIUDAD\tHOMBRES\tMUJERES\n");
                      do{ fread(&poblacion,sizeof(censo),1,pa);
	              printf("\t%s\t%d\t%d\n",poblacion.ciudad,poblacion.TotalH,poblacion.TotalM);
	       }while (!feof(pa));
                       fclose(pa);
	        printf("\n");
  	        system("Pause");
	        break;
         case 51: pa = fopen("Conteo.txt","rb");
	       printf("Ciudad a buscar: ");gets(bc);
	       printf("\tCIUDAD\tHOMBRES\tMUJERES\n");
	       while (!feof(pa)){
		fread(&poblacion,sizeof(censo),1,pa);
		if(strcmpi(poblacion.ciudad,bc)==0)
		  printf("\t%s\t%d\t%d\n",poblacion.ciudad,poblacion.TotalH,poblacion.TotalM);	
	       }
                       fclose(pa);
	       printf("\n");
  	       system("Pause");
	       break;
   }
   }while(opc!=52);
   return 0;
}
