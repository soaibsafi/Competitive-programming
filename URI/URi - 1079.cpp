#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x;
    double arr[3];
    cin>>x;
    while(x--){
        for(int i=0; i<3; i++){
            cin>>arr[i];
        }
        double avg = ((arr[0]*2)+(arr[1]*3)+(arr[2]*5))/10;
        printf("%.1lf\n", avg);
    }
    return 0;
}
