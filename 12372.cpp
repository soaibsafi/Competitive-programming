#include<iostream>

using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    int a[3];
    for(j=1;j<=t;j++){
    for(i=0; i<3;i++){
        cin>>a[i];
    }
    if(a[0]>20||a[1]>20||a[2]>20)
        cout<<"Case "<<j<<": "<<"bad"<<endl;
    else
        cout<<"Case "<<j<<": "<<"good"<<endl;
    }
    return 0;
}
