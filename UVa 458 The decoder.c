#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100000];
    int i,a;
    while(gets(ch))
    {
        a=strlen(ch);
        for(i=0; i<a; i++)
        {
            printf("%c",ch[i]-7);
        }
        printf("\n");
    }
    return 0;
}
