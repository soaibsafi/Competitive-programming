#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,b;

    while(scanf("%d%d",&a,&b)!=EOF){
        if(a>=b){
            printf("O JOGO DUROU %d HORA(S)\n", 24-a+b);
        }
        else{
            printf("O JOGO DUROU %d HORA(S)\n", b-a);
        }
    }

    return 0;
}
