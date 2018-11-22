#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,b;
    while(scanf("%d%d", &a,&b)==2){
        if(a==b)
            break;

        if(a>b){
            cout<<"Decrescente"<<endl;
        }
        else{
            cout<<"Crescente"<<endl;
        }

    }
    return 0;
}
