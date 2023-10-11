  #include <stdio.h>
  #include <stdlib.h>
  struct vehiculo{
	int num_llantas;
	float cap_carga;
	int num_pasajeros;
   };
  struct cargaliviana{
	int velocidad;
	vehiculo liviano;
  };
  struct cargapesada{
	char *origen;
	vehiculo pesado;
  };
  void main()
  { cargaliviana furgon;
    cargapesada trailer;
    system("cls");
    printf("VEHICULO DE CARGA PESADA:\n");
    printf("Ingrese origen del trailer: "); gets(trailer.origen);
    printf("Ingrese número de llantas: "); scanf("%d",&trailer.pesado.num_llantas);
    printf("Ingrese la capacidad de carga: "); scanf("%f",&trailer.pesado.cap_carga);
    printf("Ingrese número de pasajeros: "); scanf("%d",& trailer.pesado.num_pasajeros);
    printf("VEHICULO DE CARGA LIVINA:\n");
    printf("Ingrese velocidad: "); scanf("%d",&furgon.velocidad);
    printf("Ingrese número de llantas: "); scanf("%d",&furgon.liviano.num_llantas);
    printf("Ingrese capacidad de carga: "); scanf("%f",&furgon.liviano.cap_carga);
    printf("Ingrese numero de pasajeros: "); scanf("%d",&furgon.liviano.num_pasajeros);
    printf("Se necesitan: ");
    if(int(trailer.pesado.cap_carga) % int(furgon.liviano.cap_carga)!=0)
		printf("%d vehiculos livianos \n", int(trailer.pesado.cap_carga / furgon.liviano.cap_carga)+1);
       else
		printf("%d vehiculos livianos \n", int(trailer.pesado.cap_carga / furgon.liviano.cap_carga));
    system("pause");
  }
