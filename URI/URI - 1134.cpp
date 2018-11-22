#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int x,a=0,b=0,c=0;
    while(scanf("%d",&x)){
        if(x==4)
            break;

        else if(x==1){
            a++;
        }
        else if(x==2){
            b++;
        }
        else if(x==3){
            c++;
        }
        else{
            continue;
        }
    }

    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<a<<endl;
    cout<<"Gasolina: "<<b<<endl;
    cout<<"Diesel: "<<c<<endl;
    return 0;
}
