#include <stdio.h>
#include <stdlib.h>
//variables gloales
int lista[100],n;
void mayor_menor()
{ int mayor=0, menor=32767; //mayor y menor son locales de la funci¢n
   for(int i = 0; i < n; i++){  // la variable i es local del bucle for()
		if (lista[i]>mayor) mayor= lista[i];
	if (lista[i]<menor) menor= lista[i];
	    }
   printf("\nmayor: %d menor: %d", mayor, menor);
}
void pares_impares()
{ int np=0, ni=0; //np y ni son locales de la funci¢n
   for(int i = 0; i < n; i++){  // la variable i es local del bucle for()
		if (lista[i]%2 == 0) np++;
	if (lista[i]%2 != 0) ni++;
	  }
   printf("\npares: %d impares: %d", np, ni);
 }
int esprimo(int num)
{  if (num==1 || num==2 || num==3) return 1;
   for (int i=2;i<=(num/2)+1 ; i++)
	if (num%i==0) return 0;
   return 1;
}
void main()
{ int i, np=0;
  system("cls");
  printf("Ingrese el n£mero de elementos ene 1 y 100:");
  do{   scanf("%d",&n);
  }while(n<1 || n>100);
  printf("Ingrese la lista de n£meros:\n");
  for(i = 0; i < n; i++) scanf("%d",&lista[i]);
  pares_impares();
  mayor_menor();
  for(i = 0; i < n; i++)
	       if ( esprimo(lista[i]) ) np++;
  printf("\nEl n£mero de primos: %d\n", np);
  system("pause");
}
