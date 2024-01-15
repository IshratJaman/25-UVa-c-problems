#include<stdio.h>
int main()
{
    int T,i,salary1,salary2,salary3,midSalary;
    scanf("%d",&T);

    for(i=1 ; i<=T ; i++)
    {
         scanf("%d %d %d",&salary1,&salary2,&salary3);

        if ((salary1 >= salary2 && salary1 <= salary3) || (salary1 >= salary3 && salary1 <= salary2))

            midSalary = salary1;

        else if ((salary2 >= salary1 && salary2 <= salary3) || (salary2 >= salary3 && salary2 <= salary1))

            midSalary = salary2;

        else

            midSalary = salary3;

        printf("Case %d: %d\n", i, midSalary);
    }
}
