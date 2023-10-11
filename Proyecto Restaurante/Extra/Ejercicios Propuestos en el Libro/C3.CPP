#include<stdio.h>
#include <stdlib.h>
main()
{ int edad;
  float sueldo;
  long distancia;
  char sexo, nombre[30];
  double deudaExterna;
  system("cls");
  printf("Ingrese edad:");  scanf("%d",&edad);
  printf("Ingrese sueldo:");  scanf("%f",&sueldo);
  printf("Ingrese distancia:");  scanf("%ld",&distancia);
  printf("Ingrese sexo (m/f):");  scanf("%s",sexo);
  printf("Ingrese nombre:");  scanf("%s",nombre);
  printf("Ingrese deuda externa:");  scanf("%lf",&deudaExterna);
  printf("Edad:%d\n",edad);
  printf("Sueldo: %f\n",sueldo);
  printf("Distancia: %ld\n",distancia);
  printf("Sexo: %s\n",sexo);
  printf("Nombre: %s\n",nombre);
  printf("Deuda externa: %lf\n",deudaExterna);
  system("pause");
  return 0;
}
