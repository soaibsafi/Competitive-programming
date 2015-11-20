#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;
int main()
{
    char a[10];
    int i=0;
    while(gets(a)){
        if(strcmp(a,"Hajj")==0){
            i++;
            cout<<"Case "<<i<<": "<<"Hajj-e-Akbar"<<endl;
        }
        else if(strcmp(a,"Umrah")==0){
            i++;
            cout<<"Case "<<i<<": "<<"Hajj-e-Asghar"<<endl;
        }
        else if(strcmp(a,"*")==0){
            break;
        }
    };

    return 0;
}
