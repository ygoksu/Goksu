#include<stdio.h>
#include<conio.h>
int a,b,c,sure;
int main()
{
    printf ("sureyi giriniz:");
    scanf ("%d", &sure);
    printf ("\n____________");
    a=sure/3600;
    b=(sure-(a*3600))/60;
    c=sure-(a*3600)-(b*60);
    printf ("\nbu sure %d saat, %d dakika, %d saniye eder"
            ,a,b,c);
    getch();
    return 0;
}
