#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,b,c,d;

    while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF){
        int start = a*60+b;
        int end = c*60+d;
        int difference = 0;
        if(a<=c){
            difference = end - start;
        if(difference == 0)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24,difference%60);
        else
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(difference - difference%60)/60,difference%60);
        }
        else{
            difference = (24*60 - start) + end;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(difference - difference%60)/60,difference%60);
        }
    }

    return 0;
}
