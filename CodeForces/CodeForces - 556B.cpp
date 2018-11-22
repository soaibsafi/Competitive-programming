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
    int n,d;
    cin >> n >> d;
    for(int i = 1; i < n; ++i)
    {
        int a;
        cin >> a;
        if(i!=(a+d*(i&1?1:-1)+n)%n)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}

