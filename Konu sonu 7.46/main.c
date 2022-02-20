#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Turkish");

    int i=2,sayi,a[3],k;
    printf("Sayýyý giriniz (en fazla 3 basamaklý) =");
    scanf("%d",&sayi);
    printf("-----------------\n");
    while(i>=0)
    {
        a[i] = sayi %10;
        i--;
        sayi /= 10;

    }
if(a[2]>a[1] && a[1]>a[0])
{
    k=a[2];
    a[2]=a[0];
    a[0]=k;
}
else if(a[1]>a[0] && a[0]>a[2])
{
    k=a[1];
    a[1]=a[0];
    a[0]=k;
}
else if(a[1]>a[2] && a[2]>a[0])
{
    k=a[1];
    a[1]=a[0];
    a[0]=k;
    k=a[2];
    a[2]=a[1];
    a[1]=k;

}



for(int i=0; i<3;i++)
{
    printf("%d",a[i]);
}


    return 0;
}
