#include <stdio.h>

int main()
{
    int szam=1;
    int osszeg=0;
    while(szam!=0)
    {
        printf("Kérek egy egész számot (0 a kilépéshez): ");
        scanf("%d",&szam);
        osszeg=osszeg+szam;
    }
    
    printf("%d\n",osszeg);

    return 0;
}