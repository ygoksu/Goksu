#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{setlocale(LC_ALL, "Turkish");
   float kilo,vki,boy;
   char gender;
printf("Kilo(kg), boy(m) ve cinsiyet (e,E /k, K) gir:");
printf("\n----------------\n");
scanf("%f",&kilo);
scanf("%f",&boy);
 scanf("%s",&gender);
vki = kilo / (boy*boy);
printf("V�cut kitle indeksi = %f\n",vki);
switch (gender)
{
    case 'e':
case 'E':
    if(vki < 20.7)
        printf("Zay�fs�n�z. Sa�l�k riski!!!");
    else if (vki < 26.4)
        printf("Normalsiniz. Risk yoktur. :)");
    else if (vki < 31.1)
        printf("�i�manl�k s�n�r�nda ya da �i�mans�n�z. Riskli!");
        else
        printf("Obezite. Ciddi derecede riskli !!!");
        break;
case 'k':
case 'K':
    if(vki < 19.1)
        printf("Zay�fs�n�z. Sa�l�k riski!!!");
    else if (vki < 25.8)
        printf("Normalsiniz. Risk yoktur. :)");
    else if (vki < 32.2)
        printf("�i�manl�k s�n�r�nda ya da �i�mans�n�z. Riskli!");
        else
        printf("Obezite. Ciddi derecede riskli !!!");
        break;


}


    return 0;
}
