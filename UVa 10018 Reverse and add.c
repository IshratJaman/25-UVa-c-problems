#include <stdio.h>
int main()
{
    unsigned long long Num,ReverseNum,Temp;
    int i,N;
    while(scanf("%d",&N)!=EOF)
    {
        while(N--)
        {
            i=0;
            scanf("%llu",&Num);
            while(1)
            {
                Temp=Num;
                ReverseNum=0;
                while(Num!=0)
                {
                    ReverseNum=ReverseNum*10+Num%10;
                    Num=Num/10;
                }
                if(ReverseNum==Temp)
                {
                    printf("%d %llu\n",i,ReverseNum);
                    break;
                }
                else
                {
                    Num=Temp+ReverseNum;
                    i++;
                }

            }
        }
    }
    return 0;
}
