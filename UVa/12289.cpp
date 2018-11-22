#include<iostream>
#include<cstring>
#include<cstdio>


using namespace std;
int main()
{
    int t,i,len;
    char a[7];
    cin>>t;
    for(i=0;i<=t;i++){
        gets(a);
        len=strlen(a);
        if(len==5)
            cout<<"3"<<endl;
        else if((a[1]=='n'&&a[2]=='e')||(a[0]=='o'&&a[2]=='e')||(a[0]=='o'&&a[1]=='n'))
            cout<<"1"<<endl;
        else if((a[1]=='w'&&a[2]=='o')||(a[0]=='t'&&a[2]=='o')||(a[0]=='t'&&a[1]=='w'))
            cout<<"2"<<endl;


    }

    return 0;
}
