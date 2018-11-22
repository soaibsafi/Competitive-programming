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

bool mark[N];

void sieve()
{
    memset(mark, true, sizeof (mark));
    mark [0] = mark [1] = false;

    for ( int i = 4; i < N; i += 2 )
        mark [i] = false;

    for ( int i = 3; i * i <= N; i++ ) {
        if ( mark [i] ) {
            for ( int j = i * i; j < N; j += 2 * i )
                mark [j] = false;
        }
    }

}

int main ()
{
    sieve ();
    int n;
    while(scanf("%d",&n)==1){
        for(int i=2; i<n; i++){
            if(mark[i]){
                int b=n-i;
                if(mark[b]){
                    printf("%d = %d + %d\n",n,i,b);
                    break;
                }
            }
        }
    }


    return 0;
}

