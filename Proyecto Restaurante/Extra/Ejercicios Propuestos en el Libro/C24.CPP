#include <stdio.h>
#include <stdlib.h>
void main ()
{ 
   char s1[5] = "Hola"; 
   char s2[5] = {'H','o','l','a',0}; 
   char s3[5] = {'H','o','l','a','\0'};
   system("cls");
   printf ("\nLas cadena son:\n");
   printf ("%s\n%s\n%s\n",s1,s2,s3);
   system("pause");
}