#include<iostream>

using namespace std;

int main()
{
    int s,d,n;
    int i,ck;
    cin>>n;
    while(n--){
        cin>>s>>d;
        if((s>=d)&&((s+d)%2==0)){
            cout<<(s+d)/2<<" "<<(s-d)/2<<endl;
        }
        else
            cout<<"impossible"<<endl;
    }
    return 0;
}
