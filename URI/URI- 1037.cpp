#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    double num;

    while(scanf("%lf",&num)!=EOF){
        if(num<0.000000||num>100.0000){
            cout<<"Fora de intervalo"<<endl;
        }
        else if(num>=0&&num<=25.0000000){
            cout<<"Intervalo [0,25]"<<endl;
        }
        else if(num>25.00001&&num<=50.0000000){
            cout<<"Intervalo (25,50]"<<endl;
        }
        else if(num>50.00001&&num<=75.0000000){
            cout<<"Intervalo (50,75]"<<endl;
        }
        else if(num>75.00001&&num<=100.0000000){
            cout<<"Intervalo (75,100]"<<endl;
        }
    }

    return 0;
}
