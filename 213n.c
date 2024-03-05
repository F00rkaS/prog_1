#include <stdio.h>

int main()
{
    int szam=1;
    int pdb=0;
    int ndb=0;
    while(szam!=0)
    {
        printf("Kérek egy egész számot (0 a kilépéshez): ");
        scanf("%d",&szam);
        if (szam>0)
        {
            pdb++;
        }
        else if (szam<0)
        {
            ndb++;
        }
    }
    
    printf("Pozitiv elemek száma: %d\n",pdb);
    printf("Negativ elemek száma: %d\n",ndb);

    return 0;
}