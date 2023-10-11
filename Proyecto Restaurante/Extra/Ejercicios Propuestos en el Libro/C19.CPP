#include<conio.h>
#include<stdio.h>
void main()
{ int num, den,mcd=1,i=2;
  clrscr();
  printf("ingrese numerador:");scanf("%d",&num);
  printf("ingrese denominador:");scanf("%d",&den);
  printf("%d/%d\n=",num,den);
  do{
  if (num%i==0 && den%i==0) {
	      mcd=mcd*i;
	      num=num/i;
	      den=den/i;
	      printf("%d/%d\n",num,den);
	      i=2;  }
  else i++;
}while(i<=num);
printf("MCD:%d",mcd);
getch();
}
