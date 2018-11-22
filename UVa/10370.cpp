#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int C;
    cin>>C;

    while(C--){
        int N,counter = 0;
        unsigned int arr[1005];
        long int sum = 0;
        double avg,avgf;
        cin>>N;
        for(int i=0; i<N; i++){
            cin>>arr[i];
        }

        for(int i=0; i<N; i++){
            sum += arr[i];
        }
        avg = sum/N;

        for(int i=0; i<N; i++){
            if(arr[i]>avg){
                counter++;
            }
        }
        avgf = (counter*100.0)/N;

        printf("%.3lf%%\n",avgf);
    }
    return 0;
}
