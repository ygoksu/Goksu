#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{setlocale(LC_ALL, "Turkish");
  int sayi,k=0;
   printf("Say�y� giriniz (3 basamakl�) :");
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

    printf("say�da %d tane �ift rakam vard�r.",k);



    return 0;
}
