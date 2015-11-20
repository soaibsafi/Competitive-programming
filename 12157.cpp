#include<iostream>
using namespace std;
int main()
{
    int n,i,t,j;
    int res1, res2;
    int arr[25];
    cin>>t;
    for(j=1;j<=t;j++){
        cin>>n;
        res1=0;
        res2=0;
        for(i=0;i<n;i++){

            cin>>arr[i];
                res1+=(10+((arr[i]/30)*10));
                res2+=(15+((arr[i]/60)*15));
        }
        if(res1<res2)
            cout<<"Case "<<j<<": Mile "<<res1<<endl;
        else if(res2<res1)
            cout<<"Case "<<j<<": Juice "<<res2<<endl;
        else if(res1==res2)
            cout<<"Case "<<j<<": Mile Juice "<<res1<<endl;
    }

    return 0;
}
