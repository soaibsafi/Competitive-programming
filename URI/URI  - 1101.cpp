#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,b;
    while(scanf("%d%d", &a,&b)==2){
        int sum = 0;
        if(a<=0 || b<=0)
            break;

        if(b>a){
            for(int i=a; i<=b; i++){
                cout<<i<<" ";
                sum +=i;
            }
        }
        else{
            for(int i=b; i<=a; i++){
                cout<<i<<" ";
                sum +=i;
            }
        }

        cout<<"Sum="<<sum<<endl;
    }
    return 0;
}
