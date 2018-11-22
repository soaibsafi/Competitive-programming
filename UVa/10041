#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int testCase,min,sum,i,j;
    cin>>testCase;

    while(testCase--){
        int r;
        cin>>r;
        int s[30005];

        for(i=1; i<=r; i++){
            cin>>s[i];
        }
        for(i=1; i<=r;i++){
            for(j=1; j<r; j++){
                if(s[j]>s[j+1]){
                    int temp = s[j];
                    s[j] = s[j+1];
                    s[j+1] = temp;
                }
            }
        }

        for(i=1; i<=r;i++){
            sum = 0;
            for(j=1; j<=r; j++){
                sum += abs(s[j]-s[i]);

            }
            if(i==1||sum<min)
                min=sum;
        }
        cout<<min<<endl;
    }

    return 0;
}
