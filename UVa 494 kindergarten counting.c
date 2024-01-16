#include <stdio.h>
int main()
{
    char line[100];
    while(gets(line)!='\0')
     {
        int i,count=0;
        int word=0;
        for (i=0; line[i]!='\0'; ++i)
        {
            if ((line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z'))
            {

                word=1;
            }
        else
            {
                if (word)
                {
                    count++;
                    word=0;
                }
            }
        }
        if (word)
          {
            count++;
          }

        printf("%d\n",count);

    }

    return 0;
}
