#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int a=0;
    int i,t;
    char arr[15];
    cin>>t;
    for(i=1;i<=t;i++){
        fflush(stdin);
        gets(arr);

        if(strcmp(arr,"LEFT")==0){
            a++;
        }
        else if(strcmp(arr,"RIGHT")==0){
            a--;
        }
        else if(strcmp(arr,"SAME AS %d",t)==0)
            a++;
    }
    cout<<a;

    return 0;
}
