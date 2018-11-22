#include<iostream>
#include<cstdio>
#include<string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    int t;
    int i,j,m,n;
    int ck,flag = 1;
    int c=1;
    while(getline(cin,str) && (!str.empty())){
        cin>>t;

        cout<<"Case "<<c<<":"<<endl;;

        while(t--){
            cin>>i>>j;
            m = max(i,j);
            n = min(i,j);

            ck = str[n];
            for(int a=n; a<=m; a++){
                if(str[a]==ck)
                    flag = 0;
                else{
                    flag = 1;
                    break;
                }
            }
            if(flag==0)
                cout<<"Yes"<<endl;
            else{
                cout<<"No"<<endl;
            }
        }
        c++;
       getchar();
    }

    return 0;
}
