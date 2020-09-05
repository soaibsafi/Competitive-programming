#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    long long int n;
    int x;
    vector <int> v;

    while(cin>>n){
        for(long long int i=0; i<n; i++){
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(long long int i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

