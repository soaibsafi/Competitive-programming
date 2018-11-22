#include<iostream>

using namespace std;

int main()
{
    int t,i,n,j,k,temp;
    int arr[20];

    cin>>t;

    for(i=1;i<=t;i++){
        cin>>n;
        for(j=0;j<n;j++){
            cin>>arr[j];
        }
        for(j=0;j<n-1;j++){
            for(k=j+1;k<n;k++){
                    if(arr[j]>arr[k]){
                        temp=arr[j];
                        arr[j]=arr[k];
                        arr[k]=temp;
                    }
            }
        }
            cout<<2*(arr[n-1]-arr[0])<<endl;
    }

    return 0;
}
