#include<stdio.h>

int main()
{
    long long i,j,k;
    while(scanf("%lld%lld",&i,&j)!=EOF)
    {

        k=i-j;
        if(k<0) k=k*(-1);

    printf("%lld\n",k);
    }
}
