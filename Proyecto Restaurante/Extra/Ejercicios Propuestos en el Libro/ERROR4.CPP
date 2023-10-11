  #include <stdio.h>
  #include <stdlib.h>
  int main()
  { char *nombre;
    double n1,n2,n3;
    double sum;
    system("cls");
    printf("Ingrese nombre del estudiante:");scanf("%s",&nombre);
    printf("Ingrese nota 1:");scanf("%lf",&n1);
    printf("Ingrese nota 2:");scanf("%ld",&n2);
    printf("Ingrese nota 3:");scanf("%d",&n3);
    sum= n1 + n2 + n3;
    if (sum >= 70); printf("%f Aprobo\n",&sum);
    else printf("%f Reprobo\n",&sum);
    system("pause");
  }
