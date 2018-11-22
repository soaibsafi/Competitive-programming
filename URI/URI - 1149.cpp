#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,n,sum;
    while(cin>>a){
        cin>>n;
        sum=0;
        while(n<=0){
            cin>>n;
        }
        for(int i=0; i<n; i++){
            sum += (a+i);
        }

        cout<<sum<<endl;
    }
    return 0;
}

