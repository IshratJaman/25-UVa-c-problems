#include<stdio.h>
int main()
{
    int n,s=0;

    while(1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }

        s++;

        int h[n];
        int i,NumberOfBricks=0;

        for (i=0; i<n; i++)
        {
            scanf("%d",&h[i]);
            NumberOfBricks+=h[i];
        }


        int Height=NumberOfBricks/n;

        int k=0;

        for (i=0; i<n; i++)
        {
           k+=(h[i]>Height)?(h[i]-Height):0;
        }


        printf("Set #%d\n",s);
        printf("The minimum number of moves is %d.\n\n",k);
    }

    return 0;
}
