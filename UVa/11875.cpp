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
#define N 20000000
using namespace std;


int main ()
{
    int t,ck=1,n;
    int player[15];
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);

        for(int i=0; i<n; i++){
            scanf("%d", &player[i]);
        }
            printf("Case %d: %d\n",ck,player[n/2]);
            ck++;
    }


    return 0;
}

