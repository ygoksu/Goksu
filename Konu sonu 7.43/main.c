#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{setlocale(LC_ALL, "Turkish");
  int sayi,buyuk,m;
   printf("Say�y� giriniz (3 basamakl�):");
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



   printf("Say�n�n en b�y�k rakam� %d. rakam�d�r.",m);




    return 0;
}
