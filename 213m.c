#include <stdio.h>

int main()
{
    int szam=1;
    int db=0;
    while(szam!=0)
    {
        printf("Kérek egy egész számot (0 a kilépéshez): ");
        scanf("%d",&szam);
        if (szam>0)
        {
            db++;
        }
    }
    
    printf("Pozitiv elemek száma: %d\n",db);

    return 0;
}