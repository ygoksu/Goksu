#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{setlocale(LC_ALL, "Turkish");

float sayi,yedek,sayi1,sayi2;
printf("Üç adet ondalıklı sayı giriniz: ");
scanf("%f%f%f",&sayi,&sayi1,&sayi2);
if(sayi>sayi1){
    yedek=sayi;
    sayi=sayi1;
    sayi1=yedek;
    }if(sayi1>sayi2){
    yedek=sayi1;
    sayi1=sayi2;
    sayi2=yedek;
  }  if(sayi>sayi1){
    yedek=sayi;
    sayi=sayi1;
    sayi1=yedek;
  }printf(" %f ,%f ,%f",sayi,sayi1,sayi2);

    return 0;
}
