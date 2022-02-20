#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{setlocale(LC_ALL, "Turkish");
int yas,bir,iki,uc,kucuk;
   printf("Yaþýnýzý giriniz:");
   scanf("%d",&yas);
   printf("Adaylarýn yaþýný giriniz : ");
   scanf("%d%d%d",&bir,&iki,&uc);
   printf("------------------\n");
   kucuk = abs(yas - bir);
   if (kucuk < abs(yas - iki ) && kucuk < abs(yas - uc))
    printf("Yaþýnýza en yakýn 1 numaralý adaydýr. (Yaþ farký = %d)",kucuk);
   else if (kucuk > abs(yas - iki) && abs(yas - iki) < abs(yas - uc))
   printf("Yaþýnýza en yakýn 2 numaralý adaydýr, (Yaþ farký = %d)",abs(yas - iki));
   else if (kucuk > abs(yas - uc) && abs(yas - uc) < abs(yas - iki))
   printf("Yaþýnýza en yakýn 3 numaralý adaydýr. (Yaþ farký = %d)",abs(yas - uc));





    return 0;
}
