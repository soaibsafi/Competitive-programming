#include<iostream>
#include<cstdio>
#include<string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=1; i<=t; i++){
        long long int a,b,c, m, n;
        cin>>a>>b>>c;
        if((a >= b) && (a >= c)) {
            m = a;
            n = b+c;
        }
        else if ((b >= a) && (b >= c)) {
            m = b;
            n = a+c;
        }
        else {
            m = c;
            n = a+b;
        }

        if(n>m){
            if(a==b && a==c){
                cout<<"Case "<<i<<": Equilateral"<<endl;
            }
            else if(a==b || a==c || b==c){
                cout<<"Case "<<i<<": Isosceles"<<endl;
            }
            else{
                cout<<"Case "<<i<<": Scalene"<<endl;
            }
        }
        else{
            cout<<"Case "<<i<<": Invalid"<<endl;
        }
    }

    return 0;
}
