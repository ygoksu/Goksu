#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{setlocale(LC_ALL, "Turkish");
  int sayi,k=0;
   printf("Sayıyı giriniz (3 basamaklı) :");
   scanf("%d",&sayi);
    printf("-----------------\n");
    while(sayi >0)
    {

        if(sayi%2 == 0)
        {
            k++;
        }
         sayi = sayi/10;
    }

    printf("sayıda %d tane çift rakam vardır.",k);



    return 0;
}
