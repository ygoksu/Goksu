#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{setlocale(LC_ALL, "Turkish");
   int deg;
printf("Ay deðerini giriniz(1-12)= ");
scanf("%d",&deg);
printf("-----------------\n");
switch(deg){
case 1:
printf("Girdiðiniz deðer 'Ocak' ayýdýr.");
break;
case 2:
printf("Girdiðiniz deðer Þubat ayýdýr.");
break;
case 3:
printf("Girdiðiniz deðer Mart ayýdýr.");
break;
case 4:
printf("Girdiðiniz deðer Nisan ayýdýr.");
break;
case 5:
printf("Girdiðiniz deðer Mayýs ayýdýr.");
break;
case 6:
printf("Girdiðiniz deðer Haziran ayýdýr.");
break;
case 7:
printf("Girdiðiniz deðer Temmuz ayýdýr.");
break;
case 8:
printf("Girdiðiniz deðer Aðustos ayýdýr.");
break;
case 9:
printf("Girdiðiniz deðer Eylül ayýdýr.");
break;
case 10:
printf("Girdiðiniz deðer Ekim ayýdýr.");
break;
case 11:
printf("Girdiðiniz deðer Kasým ayýdýr.");
break;
case 12:
printf("Girdiðiniz deðer Aralýk ayýdýr.");
}














    return 0;
}
