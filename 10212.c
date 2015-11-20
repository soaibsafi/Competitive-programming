#include<stdio.h>
#include <stdlib.h>

int main()
{
    long long a,b,c=1,d,e=1,f,i=0,g;
    char str[40],h;
    while(scanf("%lld%lld",&b,&d)!=EOF){;
    for(a=1;a<=b;a++){
        c=a*c;
    }
    for(a=1; a<=(b-d);a++){
        e=e*a;
    }
    f = c/e;
    itoa (f,str,10);
    g=strlen(str);
    g=g-1;
    printf("%lld",g);

    for(i=0;str[i]!=0;i++){
        if(str[i]!=0){
            h=str[i];
        }
        printf("%c",h);

    }

    /*for(i=g;i>=0;i--){
            if(str[i]==0)
                printf("%c ",str[i]);
            else{
                printf("%c",str[i-1]);
                break;

            }*/




    }
    return 0;
}
