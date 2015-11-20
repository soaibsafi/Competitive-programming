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

int f91(long n)
{

    if(n<=100){
        return f91(f91( n+ 11));
    }
    if(n>=101)
        return n - 10;

}

int main ()
{
    int n;
    scanf("%d",&n);
    //cout<<n;
    if(n==0) return 0;
    printf("%d\n",f91(n));


    return 0;
}

