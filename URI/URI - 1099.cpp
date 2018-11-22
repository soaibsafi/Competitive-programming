#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        int sum = 0;
        cin>>a>>b;
        if(b>=a){
            for(int i = a+1; i<b; i++){
                if(i%2==1)
                    sum += i;
            }
        }
        else{
            for(int i = b+1; i<a; i++){
                if(i%2==1)
                    sum += i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
