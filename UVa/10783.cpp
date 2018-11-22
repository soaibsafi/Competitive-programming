#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int T;
    int a,b;
    int c = 0;
    cin>>T;

    while(T--){
        c++;
        cin>>a>>b;

        int sum = 0;

        for(a; b>=a; a++){
            if(a%2==1){
                sum += a;
            }
        }
        cout<<"Case "<<c<<": "<<sum<<endl;
    }
    return 0;
}
