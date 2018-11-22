#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x;
    while(scanf("%d", &x)!=EOF){
        int n = x+11;
        for(int i=x; i<=n; i++){
            if(i%2!=0)
                cout<<i<<endl;
        }
    }
    return 0;
}
