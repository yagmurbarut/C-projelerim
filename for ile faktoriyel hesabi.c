#include <stdio.h>
#include <stdlib.h>

//kullanıcıdan alınan sayının faktöriyelini bulduran kodlama örneği

int main()
{
   int fakt = 1; 
    int sayi;
     
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
     
    for(int i = 1; i <= sayi; i++)
    {
        fakt *= i;                                      
    }
    printf("%d != %d",sayi, fakt);
    return 0;
}
