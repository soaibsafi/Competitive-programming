#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int g,i,gv=0,iv=0, e=0,n=0,r;

    do{
        cin>>i>>g;
        n++;
        if(i==g)
            e++;
        if(i>g)
            iv++;
        else
            gv++;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    }while(scanf("%d", &r)&&r==1);

    printf("%d grenais\n",n);
    printf("Inter:%d\n",iv);
    printf("Gremio:%d\n",gv);
    printf("Empates:%d\n",e);

    if(iv>gv)
        printf("Inter venceu mais\n");
    else if(gv>iv)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");

    return 0;
}
