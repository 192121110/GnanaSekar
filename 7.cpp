#include <stdio.h>
int main()
{
    int i[]={3, 5, 6, 7, 3};
    int pf=0;
    int f=3;
    int m,n,s,pages;
    pages = sizeof(i)/sizeof(i[0]);
    printf("Incoming \t Frame 1 \t Frame 2 \t Frame 3");
    int temp[f];
    for(m=0;m<f;m++)
    {
        temp[m]=-1;
    }
    for(m=0;m<pages;m++)
    {
        s=0;
        for(n=0;n<f;n++)
        {
            if(i[m] == temp[n])
            {
                s++;
                pf--;
            }
        }
        pf++;
        if((pf<=f) && (s==0))
        {
            temp[m] = i[m];
        }
        else if(s==0)
        {
            temp[(pf-1) % f]=i[m];
        }
        printf("\n");
        printf("%d\t\t\t",i[m]);
        for(n=0;n<f;n++)
        {
            if(temp[n] != -1)
                printf(" %d\t\t\t", temp[n]);
            else
                printf(" - \t\t\t");
        }
    }
    printf("\nTotal Page Faults:\t%d\n", pf);
    return 0;
}
