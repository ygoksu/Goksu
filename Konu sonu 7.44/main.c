#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{setlocale(LC_ALL, "Turkish");
   int sayi,i,kucuk;
printf("Sayýyý giriniz(3 basamaklý): ");
scanf("%d",&sayi);
printf("---------------\n");

kucuk = sayi %10;
i = 3;

while (sayi > 0.1)
{

    if(kucuk > sayi % 10)
        {
        kucuk = sayi %10;
            i--;
        }
sayi /= 10;
}

printf("Sayýnýn en küçük rakamý soldan %d. rakamýdýr.",i);



    return 0;
}
