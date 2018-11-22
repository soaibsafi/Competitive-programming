#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int arr[3002],ck[3002];
    int n,temp,flag;
    while(scanf("%d", &n)!=EOF){
        for(int i=1;i<=n;i++){
            scanf("%d", &arr[i]);
        }
        for(int i=1; i<=n;i++){
            ck[i] = abs(arr[i] - arr[i+1]);
        }

        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                if(ck[j] > ck[j+1]){
                    temp = ck[j];
                    ck[j] = ck[j+1];
                    ck[j+1] = temp;
                }
            }
        }
        flag=0;

        for(int i=1; i<n; i++){
            if(ck[i]!=i)
                flag++;
        }

        if(flag==0)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
    }

    return 0;
}
