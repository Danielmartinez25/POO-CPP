#include <stdio.h>
#include <conio.h>
  /* Caracteres para doble l�nea
   Alt 205="�" 201="�" 200="�" 187="�" 188="�" 186="�" */
void cuadro(int,int,int,int);
void main()
{ int x1,y1,x2,y2;
  clrscr();
  printf("\nIngrese coordenada superior x y:"); scanf("%d%d",&x1,&y1);
  printf("\nIngrese coordenada inferior x y:"); scanf("%d%d",&x2,&y2);
  clrscr();
  cuadro(x1,y1,x2,y2);
  getch();
  }
void cuadro(int xs, int ys, int xi, int yi)
{ int i;
//Dibujar lineas horizontales superior e inferior
 for(i=xs ; i<xi ; i++){
      gotoxy(i,ys);cprintf("�"); // Alt 196="�"
      gotoxy(i,yi);cprintf("�");
     }
//Dibujar lineas verticales izquierda y derecha
 for(i=ys ; i<yi ; i++){
      gotoxy(xs,i);cprintf("�"); //Alt 179="�"
      gotoxy(xi,i);cprintf("�");
     }
//Dibujar las esquinas del cuadro
gotoxy(xs,ys);cprintf("�");  // Alt 218="�"
gotoxy(xs,yi);cprintf("�");  // Alt 192="�"
gotoxy(xi,ys);cprintf("�");  // Alt 191="�"
gotoxy(xi,yi);cprintf("�");  // Alt 217="�"
}
