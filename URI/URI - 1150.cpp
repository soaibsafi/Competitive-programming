#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int x,z,c=0,sum=0;
    cin>>x>>z;

    while(x>=z){
        cin>>z;
    }
    while(true){
        if(sum>z)
            break;
        sum += x;
        x++;
        c++;
    }
    cout<<c<<endl;

    return 0;
}
