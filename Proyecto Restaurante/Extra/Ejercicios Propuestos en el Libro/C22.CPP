#include<stdio.h>
#include<stdlib.h>
int main() 
{ system("cls");
  for (int i=1, p=100;  i<=p && p>=i  ; i+=2, p-=2) 
       printf("%d:%d\t", i, p);
  system("pause");
  return 0; 
}
