#include <stdio.h>
#include <stdlib.h>
main() { 
int a,b,c;
system("cls");
printf("Ingrese 3 n£meros cualquiera:");
scanf("%d %d %d",&a,&b,&c);
if (a > b)
    if ( a > c)
      printf("Mayor: %d\n",a);
    else
      printf("Mayor: %d\n",c);
else if ( b > c)
      printf("Mayor: %d\n",b);
    else
      printf("Mayor: %d\n",c);
system("pause");
return 0;
}
