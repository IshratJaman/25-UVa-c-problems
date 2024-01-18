#include<stdio.h>
int main()
{
    printf("The 1500'th ugly number is 859963392.\n");
   return 0;

   /*Calculation of finding 1500th ugly number
   #include<stdio.h>
   int main()
   {
    long long int Num,i,Count=0;

    for(i=1;;i++)
    {
        Num=i;
        while(Num%2==0) Num=Num/2;
        while(Num%3==0) Num=Num/3;
        while(Num%5==0) Num=Num/5;

      if(Num==1)
        {
           Count++;
        }
      if(Count==1500)
        {
        break;
        }
    }

   printf("%lld",i);
   return 0;
   }
   */

}
