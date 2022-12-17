#include <stdio.h>
#include <stdlib.h>

int main() {
 
 char yemek;
 printf("yemek kodunu giriniz: ");
 scanf("%s",&yemek);
 
 switch(yemek)
 {
 	case'h':printf("hamburger"); break;
 	case'p':printf("pizza"); break;
 	case'm':printf("manti"); break;
 	case'i':printf("iskender"); break;
 	default:printf("gecersiz yemek kodu!");
 }
 
  
	return 0;
}
