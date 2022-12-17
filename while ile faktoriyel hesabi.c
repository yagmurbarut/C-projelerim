#include <stdio.h>
#include <stdlib.h>

//kullanıcıdan alınan sayının faktöriyelini bulduran kodlama örneği

int main() {
 
 int sayi,faktoriyel;
 faktoriyel=1;
 printf("lutfen bir sayi giriniz: ");
 scanf("%d",&sayi);
  while(sayi>1)
  {
  	faktoriyel*=sayi;
  	sayi--;
  }
  printf("sonucunuz:  %d",faktoriyel);
  
	return 0;
}
