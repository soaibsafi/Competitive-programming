#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)==3){
        if((a==b&&b==c))
            cout<<"*"<<endl;
        else if(a!=b&&b==c)
            cout<<"A"<<endl;
        else if(b!=a&&a==c)
            cout<<"B"<<endl;
        else if(c!=a&&a==b)
            cout<<"C"<<endl;
    }

    return 0;
}
