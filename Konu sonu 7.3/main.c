#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{setlocale(LC_ALL, "Turkish");

   int a,b,c,d,sayi;

   printf("5 Basamakl� bir say� giriniz: ");
   scanf("%d",&sayi);
    a=sayi%10;
    b=(sayi/10)%10;
    c=(sayi/1000)%10;
    d=(sayi/10000)%10;
    if(a==d && b==c)
        printf("Bu say� palindrome say�d�r. ");
    else
        printf("Bu say� palindrome say� de�ildir. ");



    return 0;
}
