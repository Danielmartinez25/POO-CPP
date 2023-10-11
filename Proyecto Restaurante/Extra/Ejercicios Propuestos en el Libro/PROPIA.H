
int cuadrado(int num)
{ return num*num;
}

void cuadro(int xs, int ys, int xi, int yi)
{ int i;
//Dibujar lineas horizontales superior e inferior
 for(i=xs ; i<xi ; i++){
      gotoxy(i,ys);cprintf("Ä"); // Alt 196="Ä"
      gotoxy(i,yi);cprintf("Ä");
     }
//Dibujar lineas verticales izquierda y derecha
 for(i=ys ; i<yi ; i++){
      gotoxy(xs,i);cprintf("³"); //Alt 179="³"
      gotoxy(xi,i);cprintf("³");
     }
//Dibujar las esquinas del cuadro
gotoxy(xs,ys);cprintf("Ú");  // Alt 218="Ú"
gotoxy(xs,yi);cprintf("À");  // Alt 192="À"
gotoxy(xi,ys);cprintf("¿");  // Alt 191="¿"
gotoxy(xi,yi);cprintf("Ù");  // Alt 217="Ù"
}

int esprimo(int num)
{ int i;
  if (num==1 || num==2 || num==3) return 1;
  for (i=2;i<=(num/2)+1 ; i++)
        if (num%i==0) return 0;
  return 1;
}

void soloint(int *num)
{ int tecla, limi=wherex();
  *num=0;
  do{ tecla=getch();
     if (tecla>=48 && tecla<=57){ 
	      printf("%d",tecla-48); //calcula y muestra el digito presionado
	      *num = *num *10 + tecla-48; //almacena el carácter presionado
	      }
      if (tecla==8 && limi<wherex()){
		   *num = *num / 10;
		   printf("\b \b");
      }
 }while(tecla!=13); //repite mientras tecla sea diferente de ENTER
 printf("\n");
} 
