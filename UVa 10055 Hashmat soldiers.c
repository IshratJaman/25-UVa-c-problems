#include<stdio.h>
int main()
{
    long long int hashSoldiers,oppoSoldiers;
    while(scanf("%lld %lld",&hashSoldiers,&oppoSoldiers)!=EOF)
    {
        if(hashSoldiers > oppoSoldiers)
      {
        printf("%lld\n",hashSoldiers - oppoSoldiers);
      }
      else
      {
          printf("%lld\n",oppoSoldiers - hashSoldiers);
      }
    }
    return 0;
}
