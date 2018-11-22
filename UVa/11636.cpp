#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,t=0;
    while(cin>>n){
        if(n<0) break;
        else{
            t++;
            int x;
            for(int i=0; i<n;i++){
                if(pow(2,i)>=n){
                    x=i;
                    break;
                }
            }
            cout<<"Case "<<t<<": "<<x<<endl;
        }
    }
    return 0;
}
