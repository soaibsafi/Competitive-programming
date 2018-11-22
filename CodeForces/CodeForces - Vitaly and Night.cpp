#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n,m;
    int arr[105][210];
    int lightOn;

    while(cin>>n>>m){
        for(int i=0; i<n;i++){
            for(int j=0; j<2*m; j++){
                cin>>arr[i][j];
            }
        }

        lightOn = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<2*m; j = j+2){
                if((arr[i][j]==1)||(arr[i][j+1]==1)){
                    lightOn++;
                }
            }
        }
        cout<<lightOn<<endl;
    }

    return 0;
}
