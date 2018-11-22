#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x;

    while(scanf("%d", &x)==1){
        for(int i=1; i<= x; i++){
            if(i%2==0){
                cout<<i<<"^2 = "<<i*i<<endl;
            }
        }
    }
    return 0;
}
