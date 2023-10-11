#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main() 
{ clrscr();
   int nseg;
   printf("Ingrese el n£mero de segundos de retardos:");
   do{
         scanf("%d",&nseg);
   }while(nseg<1 || nseg>60);
   for (int i=nseg;  i>0  ; i--){
	textcolor(i); gotoxy(20,10); cprintf("%d", i);
	sleep(1);
	textcolor(0); gotoxy(20,10); cprintf("%d", i);
   }
   textcolor(14); cprintf("\nL I S T O . . . !");
   getch();
}
