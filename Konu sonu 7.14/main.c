#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Turkish");

    float N;
    printf("Righter cinsinden deprem b�y�kl���n� giriniz:");
    scanf("%f",&N);
    if (N < 5.0)

         printf("Ufak veya hasars�z.");


    else if (N < 5.5)

         printf("Az hasarl�.");


    else if ( N < 6.5)

        printf("Ciddi hasar: Catlamalar ve ��kmeler olabilir.");


    else if (N < 7.5)

        printf("Felaket: Evler ve binalar ��kebilir.");


    else
        printf("Facia: B�t�n yap�lar yok olur.");




    return 0;
}
