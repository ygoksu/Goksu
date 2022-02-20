#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Turkish");

    float N;
    printf("Righter cinsinden deprem büyüklüðünü giriniz:");
    scanf("%f",&N);
    if (N < 5.0)

         printf("Ufak veya hasarsýz.");


    else if (N < 5.5)

         printf("Az hasarlý.");


    else if ( N < 6.5)

        printf("Ciddi hasar: Catlamalar ve çökmeler olabilir.");


    else if (N < 7.5)

        printf("Felaket: Evler ve binalar çökebilir.");


    else
        printf("Facia: Bütün yapýlar yok olur.");




    return 0;
}
