#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{setlocale(LC_ALL, "Turkish");
   int deg;
printf("Ay de�erini giriniz(1-12)= ");
scanf("%d",&deg);
printf("-----------------\n");
switch(deg){
case 1:
printf("Girdi�iniz de�er 'Ocak' ay�d�r.");
break;
case 2:
printf("Girdi�iniz de�er �ubat ay�d�r.");
break;
case 3:
printf("Girdi�iniz de�er Mart ay�d�r.");
break;
case 4:
printf("Girdi�iniz de�er Nisan ay�d�r.");
break;
case 5:
printf("Girdi�iniz de�er May�s ay�d�r.");
break;
case 6:
printf("Girdi�iniz de�er Haziran ay�d�r.");
break;
case 7:
printf("Girdi�iniz de�er Temmuz ay�d�r.");
break;
case 8:
printf("Girdi�iniz de�er A�ustos ay�d�r.");
break;
case 9:
printf("Girdi�iniz de�er Eyl�l ay�d�r.");
break;
case 10:
printf("Girdi�iniz de�er Ekim ay�d�r.");
break;
case 11:
printf("Girdi�iniz de�er Kas�m ay�d�r.");
break;
case 12:
printf("Girdi�iniz de�er Aral�k ay�d�r.");
}














    return 0;
}
