#include<stdio.h>
int main()
{
    int a,b,i,j,T,sum=0;
    scanf("%d",&T);
    for(i=1 ; i<=T ; i++)
    {
        scanf("%d %d",&a,&b);
        for(j=a ; j<=b ; j++)
        {
          if(j%2==1)
          {
              sum+=j;
          }

        }

        printf("Case %d : %d\n",i,sum);
        sum = 0;
    }
    return 0;

}
