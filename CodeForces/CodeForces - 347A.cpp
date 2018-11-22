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

int a[120];

int main()
{
    int i, n;
    while (scanf("%d", &n) == 1){
        for (i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        sort(a, a+n);
        printf("%d", a[n-1]);
        for (i = 1; i < n-1; i++)
            printf(" %d", a[i]);
        printf(" %d\n", a[0]);
    }
    return 0;
}
