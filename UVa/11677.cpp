#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int h1,m1,h2,m2;
    int r1,r2;

    while(scanf("%d%d%d%d", &h1,&m1,&h2,&m2)==4){
        if( h1==0 && m1==0 && h2==0 && m2==0 )
            break;
        else{
            r1 = h2 - h1;
            r2 = m2 - m1;

            if(r2<0){
                r2 = r2+60;
                r1 = r1 - 1;
            }
            if(r1<0){
                r1 = r1+24;
            }
        }

        printf("%d\n", r1*60+r2);
    }

    return 0;
}
