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
#include <set>
#include <map>
#include <sstream>
#include <bitset>
#include <utility>
#include <math.h>
#define PI acos(-1.0)
#define MAX 20000000
using namespace std;

int main ()
{
    int n,k,p,t,ck=0;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &n, &k,&p);
            printf("Case %d: %d\n",++ck, (k-1+p)%n+1);

    }


    return 0;
}

