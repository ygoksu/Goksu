#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{setlocale(LC_ALL, "Turkish");
   int a,sayi,i,*dizi,temp;

printf("4 basamaklý bir sayý giriniz: ");
scanf("%d",&sayi);
temp = sayi;
for (i=3; i>=0; i--)
{
    dizi[i] = sayi % 10;
    sayi /=10;
}
  a=dizi[0]+dizi[1]+dizi[2]+dizi[3];
  if (pow(a,3) == temp)

    printf("Girilen %d sayisi küpünü dolduran sayýdýr.",temp);

    else
    printf("Girilen %d sayýsý küpünü dolduran sayý deðildir.",temp);






    return 0;
}
