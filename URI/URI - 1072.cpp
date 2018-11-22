#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x, in=0, out = 0;
    long long int arr[10005];
    while(scanf("%d", &x)==1){
        for(int i=0; i<x; i++){
            cin>>arr[i];
        }

        for(int i=0; i<x; i++){
            if(arr[i]>= 10 && arr[i]<=20)
                in++;
            else
                out++;
        }
        cout<<in<<" in"<<endl;
        cout<<out<<" out"<<endl;
    }
    return 0;
}
