#include <stdio.h>
int main()
{
    int p,q,x,y,i,j;
    int n,CycleLength;
    while(scanf("%d %d",&p,&q)!=EOF)
    {
       n=0;
       x=p;
       y=q;

      if(p<q)
      {
        for(i=p;i<=q;i++)
        {
            j=i;
            CycleLength=1;
            while(j!=1)
            {
                if(j%2==1)
                {
                    j=3*j+1;
                }
                else
                {
                    j=j/2;
                }

                CycleLength++;
            }

            if(CycleLength>=n)
            {
                n=CycleLength;
            }
        }
       }

    else
     {
        for(i=q; i<=p; i++)
         {
            j=i;
            CycleLength=1;
            while(j!=1)
            {
                if(j%2==1)
                {
                    j=3*j+1;
                }
                else
                {
                    j=j/2;
                }

                CycleLength++;
            }

        if(CycleLength>=n)
            {
                n=CycleLength;
            }
        }
       }

    printf("%d %d %d\n",x,y,n);
    }

   return 0;
}
