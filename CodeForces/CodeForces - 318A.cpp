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
#define MAX 1000000
using namespace std;

int main ()
{
    long long n, k;
    while(scanf("%I64d %I64d",&n,&k)==2){
        long long t = 1 + (k - 1) * 2;
        if( t > n ){
            if( n % 2 == 1 ){
                t -= n;
            }
            else{
                t -= n - 1;
            }
        }
        cout << t << endl;
    }
    return 0;
}

