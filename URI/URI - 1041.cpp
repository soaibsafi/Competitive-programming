#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    double x,y;

    while(scanf("%lf%lf",&x, &y)!=EOF){
        if(x==0.0&&y==0.0){
            cout<<"Origem"<<endl;
        }
        else if(y==0.0){
            cout<<"Eixo X"<<endl;
        }
        else if(x==0.0){
            cout<<"Eixo Y"<<endl;
        }
        else if(x>0.0&&y>0.0){
            cout<<"Q1"<<endl;
        }
        else if(x>0.0&&y<0.0){
            cout<<"Q4"<<endl;
        }
        else if(x<0.0&&y>0.0){
            cout<<"Q2"<<endl;
        }
        else if(x<0.0&&y<0.0){
            cout<<"Q3"<<endl;
        }
    }

    return 0;
}
