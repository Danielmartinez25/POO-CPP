/* 
Cabecera del programa, normalmente nuestra informaci�n del programa, esta informaci�n no debe ser 
tomada como parte de la l�gica que resuelve el problema, as� que necesita de caracteres especiales 
que indican bloque de comentarios.
*/
# include <stdio.h>
# define CONSTANTE 10
main()
{ int a,b,resultado;
  printf("Ingrese un n�mero:");
  scanf("%i",&a);
  printf("Ingrese otro n�mero:");
  scanf("%i",&b);
  resultado = a + b - CONSTANTE;
  printf("El resultado es:%i",resultado);
  return 0;
}
