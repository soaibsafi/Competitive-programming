#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
    double a[6],sum = 0.0;
    int c=0;

    for(int i=0; i<6;i++){
        cin>>a[i];
        if(a[i]>0){
            c++;
            sum += a[i];
        }
    }
    cout<<c<<" valores positivos"<<endl;
    cout<<sum/c<<endl;

    return 0;
}
