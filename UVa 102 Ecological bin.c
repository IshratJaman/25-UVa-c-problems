#include<stdio.h>
int main()
{
    int b[3],g[3],c[3];

   while (scanf("%d %d %d %d %d %d %d %d %d",&b[0],&g[0],&c[0],&b[1],&g[1],&c[1],&b[2],&g[2],&c[2])!=EOF)
    {
        int i,min_movements,moves[6];

        moves[0] = g[0] + c[0] + b[1] + g[1] + b[2] + c[2];
        moves[1] = g[0] + c[0] + b[1] + c[1] + b[2] + g[2];
        moves[2] = b[0] + g[0] + c[1] + g[1] + b[2] + c[2];
        moves[3] = b[0] + g[0] + b[1] + c[1] + g[2] + c[2];
        moves[4] = b[0] + c[0] + c[1] + g[1] + b[2] + g[2];
        moves[5] = b[0] + c[0] + b[1] + g[1] + g[2] + c[2];

        min_movements = moves[0];

        for(i=1; i<=5; i++)
        {
            if(min_movements > moves[i])
            {
                min_movements = moves[i];
            }
        }

        if(min_movements==moves[0])
            printf("BCG");
        else if(min_movements==moves[1])
            printf("BGC");
        else if(min_movements==moves[2])
            printf("CBG");
        else if(min_movements==moves[3])
            printf("CGB");
        else if(min_movements==moves[4])
            printf("GBC");
        else if(min_movements==moves[5])
            printf("GCB");

        printf(" %d\n",min_movements);

    }

    return 0;
}
