
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

int main()
{
    long long int d1,d2,d3;
    while(scanf("%I64d%I64d%I64d", &d1,&d2,&d3)==3){
        long long int a[4];

        a[0] = d1*2+d2*2;
        a[1] = d1*2+d3*2;
        a[2] = d2*2+d3*2;
        a[3] = d1+d2+d3;

        sort(a,a+4);

        printf("%I64d\n", a[0]);
    }
    return 0;
}
