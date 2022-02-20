#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{setlocale(LC_ALL, "Turkish");
int saat,i;
printf("Günün saatini giriniz : ");
scanf("%d",&saat);
if (saat <6)
    printf("Ýyi uykular");
else if (saat <11)
    printf("Günaydýn");
else if (saat <17)
    printf("Ýyi günler");
else if (saat <22)
    printf("Ýyi akþamlar");
    else if (saat <24)
    printf("Ýyi geceler");
    else
        printf("Ýyi uykular");
    return 0;
}
