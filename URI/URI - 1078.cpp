#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x;

    while(scanf("%d", &x)==1){
        for(int i=1; i<=10; i++){
            cout<<i<<" x "<<x<<" = "<<i*x<<endl;
        }
    }
    return 0;
}
