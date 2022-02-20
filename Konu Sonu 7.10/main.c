#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,sayi;
    printf("4 Basamaklý bir sayý giriniz: \n");
    scanf("%d",&sayi);
    if (sayi <10000 && sayi > 999)
        {
        d = sayi %10;
        c = (sayi / 10) %10;
        b = (sayi / 100) %10;
        a = (sayi / 1000);
        if ((a*10+b)*(c*10+d) == (b*10+a)*(d*10+4))
            printf("Girilen sayi tersyuz sayidir");
        else
            printf("Girilen sayi tersyuz degildir");
        }
        else
            printf("Yanlis sayi girdiniz.");
    return 0;
}
