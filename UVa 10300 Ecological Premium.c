#include<stdio.h>
int main()
{
   int i,n,sum;
   int f,Size,Animal,Environment;

   while(scanf("%d",&n)!=EOF)
   {
        while(n--)
        {
            sum=0;
            scanf("%d",&f);

            for(i=1;i<=f;i++)
            {
                scanf("%d %d %d",&Size,&Animal,&Environment);
                sum=sum+(Size*Environment);
            }

        printf("%d\n",sum);

        }

    }
    return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                0;
}
