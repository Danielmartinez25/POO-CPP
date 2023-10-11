/* 
Cabecera del programa, normalmente nuestra información del programa, esta información no debe ser 
tomada como parte de la lógica que resuelve el problema, así que necesita de caracteres especiales 
que indican bloque de comentarios.
*/
# include <stdio.h>
# define CONSTANTE 10
main()
{ int a,b,resultado;
  printf("Ingrese un número:");
  scanf("%i",&a);
  printf("Ingrese otro número:");
  scanf("%i",&b);
  resultado = a + b - CONSTANTE;
  printf("El resultado es:%i",resultado);
  return 0;
}
