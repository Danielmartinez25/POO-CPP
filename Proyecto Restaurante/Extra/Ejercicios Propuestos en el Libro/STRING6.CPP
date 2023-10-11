#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{ char palabra[20],palabra2[20];
  system("cls");
  printf("Ingrese una palabra:"); gets(palabra);
  printf("Ingrese otra palabra:"); gets(palabra2);
  printf("\nU t i l i z a n d o   strcmp():\n");
  if(strcmp(palabra,palabra2)==0)
	printf("La palabra:%s y la palabra:%s son iguales\n",palabra,palabra2);
  else if(strcmp(palabra,palabra2)>0)
	  printf("La palabra:%s ES MAYOR que la palabra:%s\n",palabra,palabra2);
       else
          printf("La palabra:%s ES MENOR que la palabra:%s\n",palabra,palabra2);
 printf("\nU t i l i z a n d o   strcmpi():\n");
  if(strcmpi(palabra,palabra2)==0)
	printf("La palabra:%s y la palabra:%s son iguales\n",palabra,palabra2);
  else if(strcmpi(palabra,palabra2)>0)
	  printf("La palabra:%s ES MAYOR que la palabra:%s\n",palabra,palabra2);
       else
          printf("La palabra:%s ES MENOR que la palabra:%s\n",palabra,palabra2); 
  system("pause");
  return 0;
}