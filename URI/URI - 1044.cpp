#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,b;

    while(scanf("%d%d",&a,&b)!=EOF){
        if((b%a==0) || a%b==0){
            cout<<"Sao Multiplos"<<endl;
        }
        else{
            cout<<"Nao sao Multiplos"<<endl;
        }
    }
    return 0;
}
