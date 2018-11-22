#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int T,n,p;
	int flag = 0;
	int h[102];

    cin>>T;

    while(T--){
        int day = 0;
        int hartals = 0;
        cin>>n>>p;

        for(int i=0;i<p;i++){
            cin>>h[i];
        }
        while(day < n){
            int mod = (day+1)%7;
            if(mod != 0 && mod != 6){
                flag = 0;
                for(int i=0;i<p;i++){
                    if((day+1)%h[i]==0){
                        flag = 1;
                    }
                }
                if(flag==1)
                    hartals++;
            }
            day++;
        }
        cout<<hartals<<endl;
    }

	return 0;
}
