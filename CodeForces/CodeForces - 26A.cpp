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
#define N 100000
using namespace std;

bool mark [N];
vector <int> primeList;

void sieve ()
{
    memset (mark, true, sizeof (mark));
    mark [0] = mark [1] = false;

    for ( int i = 4; i < N; i += 2 )
        mark [i] = false;

    for ( int i = 3; i * i <= N; i++ ) {
        if ( mark [i] ) {
            for ( int j = i * i; j < N; j += 2 * i )
                mark [j] = false;
        }
    }

    primeList.clear ();
    primeList.push_back (2);

    for ( int i = 3; i < N; i += 2 ) {
        if ( mark [i] )
            primeList.push_back (i);
    }

}

int main ()
{
    sieve ();

    int n;
    while(scanf("%d",&n)==1){

    int almostPrimeCount(0);
    for(int k = 2; k <= n; k++){
        int divisors(0);
        for(int p = 0; p < primeList.size(); p++){if(k % primeList[p] == 0){++divisors;}}
        if(divisors == 2){++almostPrimeCount;}
    }
     printf("%d\n", almostPrimeCount);
    }
    return 0;
}

