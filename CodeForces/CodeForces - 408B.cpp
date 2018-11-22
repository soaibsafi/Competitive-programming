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

int main(){
    const int N = 26;

    int available[N] = {0};
    int recipe[N] = {0};

    string sheets="", garland="";

    getline(cin, sheets);
    for(int k = 0; k < sheets.size(); k++) ++available[sheets[k] - 'a'];

    getline(cin, garland);
    for(int k = 0; k < garland.size(); k++) ++recipe[garland[k] - 'a'];

    bool possible=1;
    long total=0;

    for(int k = 0; k < N; k++){
        if(recipe[k] > 0 && available[k] == 0){
            possible = 0;
            break;
        }
        else if(recipe[k] <= available[k]) total += recipe[k];
        else total += available[k];
    }

    if(possible) printf("%ld\n",total);
    else printf("%ld\n",-1);

    return 0;
}
