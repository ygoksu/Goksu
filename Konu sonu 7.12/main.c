#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{setlocale(LC_ALL, "Turkish");
   int a,sayi,i,*dizi,temp;

printf("4 basamakl� bir say� giriniz: ");
scanf("%d",&sayi);
temp = sayi;
for (i=3; i>=0; i--)
{
    dizi[i] = sayi % 10;
    sayi /=10;
}
  a=dizi[0]+dizi[1]+dizi[2]+dizi[3];
  if (pow(a,3) == temp)

    printf("Girilen %d sayisi k�p�n� dolduran say�d�r.",temp);

    else
    printf("Girilen %d say�s� k�p�n� dolduran say� de�ildir.",temp);






    return 0;
}
