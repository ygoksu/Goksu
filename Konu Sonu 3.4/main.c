#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,binler,onlar,yuzler,birler,Rakamlar_toplami;
    printf("4 Basamakli sayi giriniz: ");
    scanf("%d",&sayi);
    if (sayi<1000 || sayi>9999){
        printf("yanlis sayi girdiniz!");
        }else{
       binler = sayi/1000;
       yuzler = (sayi-(binler*1000)) /100;
       onlar = (sayi-(binler*1000)-(yuzler*100))/10;
       birler = sayi %10;
       Rakamlar_toplami=onlar+yuzler+birler+binler;
       printf("%d",Rakamlar_toplami);






        }



    return 0;
}
