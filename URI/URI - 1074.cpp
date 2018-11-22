#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--){
        long long int n;
        cin>>n;
        if(n==0){
            cout<<"NULL"<<endl;
        }
        else if(n>0){
            if(n%2==0)
                cout<<"EVEN POSITIVE"<<endl;
            else
                cout<<"ODD POSITIVE"<<endl;
        }
        else{
            if(n%2==0)
                cout<<"EVEN NEGATIVE"<<endl;
            else
                cout<<"ODD NEGATIVE"<<endl;
        }

    }
    return 0;
}
