#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cn,rn,sn,total,in;
    char ic;
    cn=0;
    rn=0;
    sn=0;

    double a,b,c;

    while(n--){
        cin>>in;
        cin>>ic;

        if(ic=='C'){
            cn += in;
        }
        else if(ic=='R'){
            rn += in;
        }
        else if(ic=='S'){
            sn += in;
        }
    }

    total = cn+rn+sn;

    a = ((cn*100.0)/total);
    b = ((rn*100.0)/total);
    c = ((sn*100.0)/total);

    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<cn<<endl;
    cout<<"Total de ratos: "<<rn<<endl;
    cout<<"Total de sapos: "<<sn<<endl;

    printf("Percentual de coelhos: %.2lf %%\n",a);
    printf("Percentual de ratos: %.2lf %%\n",b);
    printf("Percentual de sapos: %.2lf %%\n",c);

    return 0;
}
