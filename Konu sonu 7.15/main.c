#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{setlocale(LC_ALL, "Turkish");
int saat,i;
printf("G�n�n saatini giriniz : ");
scanf("%d",&saat);
if (saat <6)
    printf("�yi uykular");
else if (saat <11)
    printf("G�nayd�n");
else if (saat <17)
    printf("�yi g�nler");
else if (saat <22)
    printf("�yi ak�amlar");
    else if (saat <24)
    printf("�yi geceler");
    else
        printf("�yi uykular");
    return 0;
}
