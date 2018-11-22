#include<iostream>
using namespace std;
int main()
{
    int t,s,i,res,j,k;
    long arr[10001];
    cin>>t;

    for(k=1;k<=t;k++){
        cin>>s;
        for(i=0;i<s;i++){
            cin>>arr[i];
        }
        for(i=0;i<s-1;i++){
            for(j=i+1;j<s;j++){
                if(arr[i]<arr[j]){
                    res=arr[i];
                    arr[i]=arr[j];
                    arr[j]=res;

                }
            }
        }
        cout<<"Case "<<k<<": "<<arr[0]<<endl;
    }

    return 0;
}
