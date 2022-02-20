#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{setlocale(LC_ALL, "Turkish");
   int sayi,*dizi,i=4,a=0;
printf("Sayýyý giriniz: ");
scanf("%d",&sayi);
printf("---------------------\n");
while (sayi > 0)
{
    dizi[i] = sayi % 10;
    sayi = sayi /10;
    i--;

}
if (dizi[2]>5)
{
    dizi[1]+=1;
    dizi[2]=0;
    dizi[3]=0;
    dizi[4]=0;
}

    else if(dizi[2]==5 && (dizi[3]> 0 || dizi[4]> 0))
    {
        dizi[1]+=1;
    dizi[2]=0;
    dizi[3]=0;
    dizi[4]=0;
    }
    else if (dizi[2] <= 5 )
    {
    dizi[2]=0;
    dizi[3]=0;
    dizi[4]=0;
    }



printf("Girilen sayýnýn yuvarlatýlmýþ hali = ");
while(a <= 4)
   {
      printf("%d",dizi[a]);
    a++;

   }

    return 0;
}
