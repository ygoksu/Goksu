#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{setlocale(LC_ALL, "Turkish");
int yas,bir,iki,uc,kucuk;
   printf("Ya��n�z� giriniz:");
   scanf("%d",&yas);
   printf("Adaylar�n ya��n� giriniz : ");
   scanf("%d%d%d",&bir,&iki,&uc);
   printf("------------------\n");
   kucuk = abs(yas - bir);
   if (kucuk < abs(yas - iki ) && kucuk < abs(yas - uc))
    printf("Ya��n�za en yak�n 1 numaral� adayd�r. (Ya� fark� = %d)",kucuk);
   else if (kucuk > abs(yas - iki) && abs(yas - iki) < abs(yas - uc))
   printf("Ya��n�za en yak�n 2 numaral� adayd�r, (Ya� fark� = %d)",abs(yas - iki));
   else if (kucuk > abs(yas - uc) && abs(yas - uc) < abs(yas - iki))
   printf("Ya��n�za en yak�n 3 numaral� adayd�r. (Ya� fark� = %d)",abs(yas - uc));





    return 0;
}
