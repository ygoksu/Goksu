#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{setlocale(LC_ALL, "Turkish");
   int sayi,i,kucuk;
printf("Say�y� giriniz(3 basamakl�): ");
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

printf("Say�n�n en k���k rakam� soldan %d. rakam�d�r.",i);



    return 0;
}
