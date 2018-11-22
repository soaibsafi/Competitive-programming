#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x;
    while(scanf("%d", &x)!=EOF){
        for(int i=1; i<=x; i++){
            if(i%2!=0)
                cout<<i<<endl;
        }
    }

    return 0;
}
