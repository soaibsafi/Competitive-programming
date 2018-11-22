#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x;

    while(scanf("%d", &x)==1){
        for(int i=1; i<= 1000; i++){
            if(i%x==2){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
