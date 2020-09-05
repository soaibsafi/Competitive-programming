#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    long long int n,x,a,b;
    int value;


    while(cin>>n){
        vector <int> v;
        for(long long int i=0; i<n; i++){
            cin>>value;
            v.push_back(value);
        }
        cin>>x;
        v.erase(v.begin()+x-1);
        cin>>a>>b;

        v.erase(v.begin()+a-1, v.begin()+b-1);

        cout<<v.size()<<endl;

        for(long long int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

