#include<iostream>

using namespace std;

int main()
{

    int t,i,j;
    int input[3];

    cin>>t;
    for(i=1; i<=t;i++){
        for(j=0; j<3;j++){
        cin>>input[j];
        }
        if(input[0]<input[1]&&input[0]>input[2])
            cout<<"Case "<<i<<": "<<input[0]<<endl;
        else if(input[0]>input[1]&&input[0]<input[2])
            cout<<"Case "<<i<<": "<<input[0]<<endl;
        else if(input[1]<input[0]&&input[1]>input[2])
            cout<<"Case "<<i<<": "<<input[1]<<endl;
        else if(input[1]>input[0]&&input[1]<input[2])
            cout<<"Case "<<i<<": "<<input[1]<<endl;
        else if(input[2]>input[0]&&input[2]<input[1])
            cout<<"Case "<<i<<": "<<input[2]<<endl;
        else if(input[2]<input[0]&&input[2]>input[1])
            cout<<"Case "<<i<<": "<<input[2]<<endl;
    }

    return 0;
}
