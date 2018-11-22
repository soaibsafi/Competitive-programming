#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)==2){
        if(y>x){
            for(int i=x+1; i<y; i++){
                if(i%5==2 || i%5==3){
                    cout<<i<<endl;
                }
            }
        }
        else{
            for(int i=y+1; i<x; i++){
                if(i%5==2 || i%5==3){
                    cout<<i<<endl;
                }
            }
        }
    }

    return 0;
}
