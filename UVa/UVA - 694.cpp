
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <bitset>
#include <utility>
#include <set>
#include <math.h>
#define pi acos(-1.0)
#define N 1000000
using namespace std;


int main ()
{
    long long int a,b,c1=1,i;
    while(scanf("%lld%lld", &a,&b)==2){
        if(a<0 && b<0) break;
        long long int temp = a;
        for(i=1; i!=0; i++){
            if(a==1) break;
            if(a%2==0) a /=2;
            else a = 3*a+1;
            if(a>b) break;
        }

        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",c1,temp,b,i);
        c1++;
    }

    return 0;
}

