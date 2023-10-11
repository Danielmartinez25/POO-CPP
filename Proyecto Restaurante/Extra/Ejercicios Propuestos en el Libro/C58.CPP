  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  void main()
  { struct {
   	char *nombre;
   	int n1,n2,n3;
     } estudiante;
    system("cls");
    printf("Ingrese nombre del estudiante:");gets(estudiante.nombre);
    printf("Ingrese nota 1:");scanf("%d",&estudiante.n1);
    printf("Ingrese nota 2:");scanf("%d",&estudiante.n2);
    printf("Ingrese nota 3:");scanf("%d",&estudiante.n3);
    if (estudiante.n1 + estudiante.n2 + estudiante.n3 >= 70) printf("Aprobo\n");
    else printf("Reprobo\n");
    system("pause");
  }
