#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
      if(n==0)
        {
            break;
        }

        while(n>=10)
          {
            int g=0;

            while(n>0)
             {
                g=g+n%10;
                n/= 10;
             }

            n=g;
        }

        printf("%d\n",n);
    }

    return 0;
}
