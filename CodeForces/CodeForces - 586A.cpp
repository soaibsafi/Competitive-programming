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
#define MAX 110
using namespace std;

int main ()
{
    int pair[105];
    int n,i;
    while(scanf("%d",&n)==1){
        int count = 0;
        for(i=0; i<105; i++) pair[i]=2;
        for(i=0; i<n; i++){
            scanf("%d",&pair[i]);
        }

        for(int i=0;i<n;i++)
        {
            if(pair[i]==1)
                count++;
            if(pair[i]==0&&pair[i-1]==1&&pair[i+1]==1)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}

