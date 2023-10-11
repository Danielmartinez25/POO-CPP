#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char *frase;
int ca,ce,ci,co,cu;
ca=ce=ci=co=cu=0;
system("cls");
printf("Ingrese una frase preferida: "); gets(frase);
for (int i=0;i<strlen(frase);i++)
     switch(frase[i]){
	    case 'A':
	    case 'a': ca++; break;
	    case 'E':
	    case 'e': ce++; break;
	    case 'I':
	    case 'i': ci++; break;
	    case 'O':
	    case 'o': co++; break;
	    case 'U':
	    case 'u': cu++; break;
    }
printf("El total de vocals a=%d\t e=%d\t i=%d\t o=%d\t u=%d\n ",ca,ce,ci,co,cu);
system("pause");
return 0;
}
