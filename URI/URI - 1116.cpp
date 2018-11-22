#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b==0)
            cout<<"divisao impossivel"<<endl;
        else{
            double result = (double)(a*1.0/b);
            printf("%.1lf\n",result);
        }
    }
    return 0;
}
