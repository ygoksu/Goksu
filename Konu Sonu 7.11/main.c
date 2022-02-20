#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{setlocale(LC_ALL, "Turkish");
   //Yarım kare sayı 4 basamaklı

   int sayi,a,b,birler,onlar,yarimkare;
    printf("4 Basamaklı bir sayı giriniz: ");
    scanf("%d",&sayi);
   a=sayi/100;
   birler=sayi%10;
   onlar=(sayi/10)%10;
   b=(onlar*10)+birler;
   yarimkare=a+b;
   if(sayi == pow(yarimkare,2))
    printf("Girilen sayı yarımkare bir sayıdır. ");
   else
    printf("Girilen sayı yarımkare sayı değildir !!");







    return 0;
}
