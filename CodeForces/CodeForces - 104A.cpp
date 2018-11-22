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
    int n;
    while(scanf("%d",&n)==1){
        int way  = 0;
        if(n<=10||n>21) way = 0;
        else if(n==20) way = 15;
        else way = 4;

        printf("%d\n",way);
    }
    return 0;
}

