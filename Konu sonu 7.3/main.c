#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{setlocale(LC_ALL, "Turkish");

   int a,b,c,d,sayi;

   printf("5 Basamaklý bir sayý giriniz: ");
   scanf("%d",&sayi);
    a=sayi%10;
    b=(sayi/10)%10;
    c=(sayi/1000)%10;
    d=(sayi/10000)%10;
    if(a==d && b==c)
        printf("Bu sayý palindrome sayýdýr. ");
    else
        printf("Bu sayý palindrome sayý deðildir. ");



    return 0;
}
