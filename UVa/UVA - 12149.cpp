#include<iostream>
#include<cstdio>
#include<string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    long int n, sum;
    while(scanf("%d",&t)==1){
        if(t==0)
            break;

        else{
            sum = 0;
            for(int i=t; i>=1; i--){
                sum += i*i;
            }
            cout<<sum<<endl;
        }
    }



    return 0;
}
