#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
    int a[5];
    int c=0;

    for(int i=0; i<5;i++){
        cin>>a[i];
        if(a[i]%2 == 0){
            c++;
        }
    }
    cout<<c<<" valores pares"<<endl;





    return 0;
}
