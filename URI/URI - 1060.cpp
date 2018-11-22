#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
    double a[6];
    int c=0;

    for(int i=0; i<6;i++){
        cin>>a[i];
        if(a[i]>0)
            c++;
    }
    cout<<c<<" valores positivos"<<endl;

    return 0;
}
