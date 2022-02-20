#include <stdio.h>
#include <stdlib.h>

int main()
{ //klavyeden girilen iki ayrý kesirli ifadenin pay ve paydasýna göre bu kesirli ifadelerin toplamýnda ve çarpýmýnda oluþan kesirli ifadeyi ve bu ifadenin sonucunu ekrana yazdýran programý yazýnýz.
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
