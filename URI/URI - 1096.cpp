#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int i=1,j;
    while(i<=9){
        j=7;
        cout<<"I="<<i<<" J="<<j<<endl;
        j--;
        cout<<"I="<<i<<" J="<<j<<endl;
        j--;
        cout<<"I="<<i<<" J="<<j<<endl;
        i=i+2;
    }

    return 0;
}
