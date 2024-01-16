#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    int c;
   for(c=1; c<=T; c++)
    {
        int N;
        scanf("%d",&N);
        int i,max=0;
        for(i=0; i<N; i++)
        {
            int s;
            scanf("%d",&s);
            if (max<s)
            {
                max = s;
            }
        }

        printf("Case %d: %d\n", c, max);
    }

    return 0;
}
