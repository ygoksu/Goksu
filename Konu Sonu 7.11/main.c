#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{setlocale(LC_ALL, "Turkish");
   //Yar�m kare say� 4 basamakl�

   int sayi,a,b,birler,onlar,yarimkare;
    printf("4 Basamakl� bir say� giriniz: ");
    scanf("%d",&sayi);
   a=sayi/100;
   birler=sayi%10;
   onlar=(sayi/10)%10;
   b=(onlar*10)+birler;
   yarimkare=a+b;
   if(sayi == pow(yarimkare,2))
    printf("Girilen say� yar�mkare bir say�d�r. ");
   else
    printf("Girilen say� yar�mkare say� de�ildir !!");







    return 0;
}
