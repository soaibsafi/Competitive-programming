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
    int x,y,a,b;
    while(scanf("%d%d%d%d",&x,&y,&a,&b)==4){
        int count = 0;
        for (int Vasya = a; Vasya <= x; ++Vasya){
            int end = min(Vasya - 1, y);
            if (b <= end) count += (end - b + 1);

        }
        printf("%d\n", count);

        for (int Vasya = a; Vasya <= x; ++Vasya){
            int end = min(Vasya - 1, y);
            for (int Petya = b; Petya <= end; ++Petya){
                printf("%d %d\n",Vasya, Petya);
            }
        }
    }
    return 0;
}
