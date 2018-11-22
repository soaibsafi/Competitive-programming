#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<set>
#include<list>

using namespace std;

int main()
{
    int na, nb, k,m;
    int A[100002], B[100002];

    while(scanf("%d%d",&na,&nb)==2){
        scanf("%d%d", &k,&m);
        for(int i=0; i<na; i++){
            scanf("%d", &A[i]);
        }
        for(int i=0; i<nb; i++){
            scanf("%d", &B[i]);
        }

        if(A[k-1]<B[nb-m]) printf("YES\n");
        else printf("NO\n");
    }

 return 0;
}
