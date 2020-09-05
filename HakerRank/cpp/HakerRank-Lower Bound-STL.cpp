#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    long long int n,q,x,y;

    while(cin>>n){
        vector <int> v;
        for(long long int i=0; i<n; i++){
            cin>>x;
            v.push_back(x);
        }

        cin>>q;
        for(long long int i=0; i<q; i++){
            cin>>y;
            vector<int>::iterator low,up;
            low = lower_bound(v.begin(), v.end(), y);
            up = upper_bound(v.begin(), v.end(), y);
            if(low==up){
                cout<<"No ";
                cout<<up-v.begin()+1<<endl;
            }
            else{
                cout<<"Yes ";
                cout<<low-v.begin()+1<<endl;
            }


        }



    }

    return 0;
}

