#include <stdio.h>
#include <stdlib.h>

int main()
{ //klavyeden girilen iki ayr� kesirli ifadenin pay ve paydas�na g�re bu kesirli ifadelerin toplam�nda ve �arp�m�nda olu�an kesirli ifadeyi ve bu ifadenin sonucunu ekrana yazd�ran program� yaz�n�z.
   float a,b,c,d;
   float Toplam,Carpim;
   printf("Birinci ifadenin payini ve paydasini giriniz:");
   scanf("%d%d",&a,&b);
   printf("ikinci ifadenin payini ve paydasini giriniz:");
   scanf("%f%f",&c,&d);
   Toplam =(a/b)+(c/d);
   Carpim =(a/b)*(c/d);

   printf("Toplam = %.3f \n",Toplam);
   printf("Carpim = %.3f",Carpim);


    return 0;
}
