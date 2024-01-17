#include<stdio.h>
int main()
 {
    char ch;
    int Quote=0;
    while((scanf("%c",&ch))!=EOF)
    {
        if(ch=='"')
        {
            Quote++;
            if(Quote%2!=0)
            {
                printf("``");
            }
        else if(Quote%2==0)
            {
                printf("''");
            }

        }
        else
        {
            printf("%c",ch);
        }
    }

    return 0;
}
