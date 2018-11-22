#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int i=1,j=7;
    while(i<=9){

        cout<<"I="<<i<<" J="<<j<<endl;
        j--;
        cout<<"I="<<i<<" J="<<j<<endl;
        j--;
        cout<<"I="<<i<<" J="<<j<<endl;
        i=i+2;
        j=j+4;
    }

    return 0;
}
