#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int x;
    while(scanf("%d",&x)!=EOF){
        for(int i=1; i<(4*x); i=i+4){
            cout<<i<<" "<<i+1<<" "<<i+2<<" PUM"<<endl;
        }
    }
    return 0;
}

