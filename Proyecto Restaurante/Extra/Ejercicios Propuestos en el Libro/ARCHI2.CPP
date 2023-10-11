#include <stdio.h>
#include <stdlib.h>
int main()
{  FILE *pa;
   char linea[60];
   system("cls");
   pa = fopen("primero.txt", "rt");

   do{ fgets(linea, 60, pa);
      printf("%s\n\n",linea);
   }while (!feof(pa));

   fclose(pa);
   system("pause");
   return 0;
}
