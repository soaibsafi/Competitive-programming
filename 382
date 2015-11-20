#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,sum;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)==1){
        if(n==0){
            printf("END OF OUTPUT\n");
            break;
        }
        else{
            sum = 0;
            for(int j=1; j<n; j++){
                if(n%j==0) sum += j;

            }
            if(sum==n) printf("%*d  PERFECT\n",5,n);
            else if(sum<n) printf("%*d  DEFICIENT\n",5,n);
            else printf("%*d  ABUNDANT\n",5,n);
        }
    }
    return 0;

}
