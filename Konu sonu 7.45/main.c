#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Turkish");
    int sayi,i=2,dizi[3],j=0,temp,m=0;
    printf("Sayıyı giriniz (en fazla 3 basamaklı): ");
    scanf("%d",&sayi);
    printf("----------------\n");

    while(i>=0)
    {
        dizi[i] = sayi % 10;
        i--;
        sayi /=10;
    }
     while(m < 3)
        {

        while(j <2)
      {
         if(dizi[j]>dizi[j+1])
          {
              temp = dizi[j];
              dizi[j]=dizi[j+1];
              dizi[j+1]=temp;

          }
        j++;
      }
      m++;
      }



 printf("Bu sayıdan elde edilebilecek en küçük sayı = ");
 int l=0;
 while(l<3)
 {
     printf("%d",dizi[l]);
     l++;

 }




    return 0;
}
