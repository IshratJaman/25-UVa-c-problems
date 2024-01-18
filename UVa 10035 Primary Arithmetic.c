#include<stdio.h>
int main()
{
    long long int x,y,count,carry;
    while(scanf("%llu %llu",&x,&y)!=EOF)
    {
       if(x==0 && y==0)
        break;

       count=0;
       carry=0;

       while(x||y)
       {
          carry=((x%10)+(y%10)+carry)/10;
          x=x/10;
          y=y/10;
          count=count+carry;
       }

       if(count==0)
        printf("No carry operation.\n");
       else if(count==1)
        printf("1 carry operation.\n");
       else
        printf("%llu carry operations.\n",count);
    }
    return 0;
}
