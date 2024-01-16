#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
      while(t--)
      {
        int n;
        scanf("%d",&n);
        int ans=(((((n*567/9)+7492)*235)/47)-498);
        int TensColumn=abs(ans/10)%10;
        printf("%d\n",TensColumn);
      }
    }

    return 0;
}
