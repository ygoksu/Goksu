#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{setlocale(LC_ALL, "Turkish");
  int sayi,buyuk,m;
   printf("Sayýyý giriniz (3 basamaklý):");
   printf("\n-------------------\n");
   scanf("%d",&sayi);
   buyuk = sayi % 10;
   m = 3;

   while(sayi > 0)
   {    sayi = sayi / 10;
       if(buyuk < sayi % 10)
       {
           buyuk = sayi % 10;
       m -=1;
       }
   }



   printf("Sayýnýn en büyük rakamý %d. rakamýdýr.",m);




    return 0;
}
