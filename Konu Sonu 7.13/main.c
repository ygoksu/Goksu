#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{setlocale(LC_ALL, "Turkish");
   int a,b,c;
   printf("a,b,c uzunluklarını giriniz : ");
   scanf("%d%d%d",&a,&b,&c);
    if ((b+c) > a > (abs(b-c)) || (a+c) > b > (abs(a-c)) || (a+b) > c > (abs(a-b)))
    {
        if (a==b && b == c)
            {
                printf("Girilen ucgen eskenar üçgendir.");
            }

        else if ((a==b) || (b==c) || (a==c))
            {
                printf("Girilen ucgen ikizkenar üçgendir.");
            }

        else if ( (a != b) && (b != c))
            {
                printf("Girilen ucgen cesitkenar.");
            }

    }
    return 0;
}





