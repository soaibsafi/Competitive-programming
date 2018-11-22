#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int x;
    while(scanf("%d",&x)!=EOF){
        for(int i=1; i<=x; i++){
            cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
        }
    }
    return 0;
}

