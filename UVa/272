#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int i,t;
    char a[1000];
    gets(a);
    t=strlen(a);
    for(i=0;i<t;i++){
        if(a[i]==' '){
            i++;
            if(a[i]==34){
                a[i]=96;
                i++;
                a[i]=96 ;
            }

        }
        else if(a[i]==34){
            a[i]=39;
                i++;
                a[i]=39;
        }

    }
    puts(a);

    return 0;
}
