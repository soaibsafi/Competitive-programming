#include<stdio.h>

int main()
{
    long long i,j,k;
    while(scanf("%lld%lld",&i,&j)!=EOF)
    {
        k=2*i*j;

        printf("%lld\n",k);
    }
    return 0;
}
