#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    double i=0,j1=1,j2=2,j3=3;
    while(i<=2){

        cout<<"I="<<i<<" J="<<j1<<endl;
        cout<<"I="<<i<<" J="<<j2<<endl;
        cout<<"I="<<i<<" J="<<j3<<endl;
        i = i+0.2;
        j1 = j1+0.2;
        j2 = j2+0.2;
        j3 = j3+0.2;
    }

    return 0;
}
