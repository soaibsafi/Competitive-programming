#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int x,y;
    long long int sum;
    while(scanf("%d%d",&x,&y)==2){
        sum = 0;
        if(y>x){
            for(int i=x; i<=y; i++){
                if(i%13!=0){
                    sum += i;
                }
            }
        }
        else{
            for(int i=y; i<=x; i++){
                if(i%13!=0){
                    sum += i;
                }
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
