#include <stdio.h>
#include <stdlib.h>
void main ()
{  char s1[5] = "Hola"; 
   char s2[5] = {'H','o','l','a',0}; 
   char s3[5] = {'H','o','l','a','\0'};
   char c1[] = "Chao hasta pronto...!";
   char c2[] = {'H','a','s','t','a',' ','l','u','e','g','o',0};
   char c3[] = {'B','y',' ','b','y','\0'};
   system("cls");
   printf ("\nLas cadena son:\n");
   printf ("%s\n%s\n%s\n",s1,s2,s3);
   printf ("%s\n%s\n%s\n",c1,c2,c3);
   system("pause");
}
