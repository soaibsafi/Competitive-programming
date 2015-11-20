#include<iostream>
using namespace std;
int main()
{
    int t,a[11],i,j;
    int ck;

    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    for(j=1;j<=t;j++){
        for(i=0; i<10;i++){
            cin>>a[i];
        }
        if(a[0]<a[1]){
                a[10]=101;
                ck=0;
            for(i=0; i<10;i++){
                if(a[i]<a[i+1]){
                    ck++;
                    }
                }

        }
        else if(a[0]>a[1]){
                a[10]=0;
                ck=0;
             for(i=0; i<10;i++){
                if(a[i]>a[i+1]){
                    ck++;
                }
             }
        }
        if(ck==10)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;
    }

    return 0;
}
