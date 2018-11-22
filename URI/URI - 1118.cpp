#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    double n,s;
    int r,c;

    do{
        c=0;
        s=0.0;
        while(c<2){
            cin>>n;
            if(n>=0.0 && n<=10.0){
                s += n;
                c++;
            }
            else{
                cout<<"nota invalida"<<endl;
            }
        }
    printf("media = %.2lf\n",s/2.0);

        do{
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>r;
        }while(r!=1 && r!=2);
    }while(r!=2);

    return 0;
}
