#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int x;
    while(scanf("%d",&x)==1){
        if(x==2002){
            cout<<"Acesso Permitido"<<endl;
            break;
        }
        else
            cout<<"Senha Invalida"<<endl;
    }

    return 0;
}
