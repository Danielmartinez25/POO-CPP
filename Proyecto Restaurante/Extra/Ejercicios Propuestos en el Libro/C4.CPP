#include<stdio.h>
#include <stdlib.h>
main()
{ int edad;
  float sueldo;
  long distancia;
  char sexo, nombre[30];
  double deudaExterna;
  system("cls");
  printf("Ingrese edad, sueldo y distancia:");  scanf("%d%f%ld",&edad,&sueldo,&distancia);
  printf("Ingrese sexo (m/f), nombre y deuda externa:");  scanf("%s%s%lf",sexo,nombre,&deudaExterna);
  printf("Edad:%d\n",edad);
  printf("Sueldo: %f\n",sueldo);
  printf("Distancia: %ld\n",distancia);
  printf("Sexo: %s\n",sexo);
  printf("Nombre: %s\n",nombre);
  printf("Deuda externa: %lf\n",deudaExterna);
  system("pause");
  return 0;
}
