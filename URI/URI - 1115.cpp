#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)==2){
        if(x==0 || y==0)
            break;
        else if(x>0 && y>0)
            cout<<"primeiro"<<endl;

        else if(x>0 && y<0)
            cout<<"quarto"<<endl;

        else if(x<0 && y>0)
            cout<<"segundo"<<endl;

        else if(x<0 && y<0)
            cout<<"terceiro"<<endl;

    }


    return 0;
}
