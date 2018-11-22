#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int f,i,j,n,k;
    while((scanf("%d",&n))!=EOF){
        for(k=1; k<=n;k++){
            float sum=0,b=0;
            cin>>f;
            float a[3];
            for(i=1;i<=f;i++){
                for(j=0;j<3;j++){
                    cin>>a[j];
                    sum =((a[0]/a[1])*a[2])*a[1];
                }
                b=b+sum;
            }
            cout<<b<<endl;
        }
    }
    return 0;
}
