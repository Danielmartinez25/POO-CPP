#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
char palabra[50];
int iz, de;
system("cls");
printf("Ingrese una palabra: "); gets(palabra);
for (iz=0,de=strlen(palabra)-1; iz<de && de>iz ;iz++,de--)
     if (tolower(palabra[iz]) != tolower(palabra[de])) break;
if(iz<de) printf("La palabra %s no es palindroma\n ",palabra);
else printf("La palabra %s si es palindroma\n ",palabra);
system("pause");
return 0;
}
