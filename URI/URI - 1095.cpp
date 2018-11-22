#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int i=1,j=60;
    while(true){
        cout<<"I="<<i<<" J="<<j<<endl;
        i=i+3;
        j=j-5;
        if(j<0)
            break;
    }

    return 0;
}
