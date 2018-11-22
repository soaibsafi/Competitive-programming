#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int x,y,z;
    int arr[3];

    while(scanf("%d%d%d",&x,&y,&z)!=EOF){
        arr[0] = x;
        arr[1] = y;
        arr[2] = z;

        for(int i=0; i<3; i++){
            for(int j=0; j<2; j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }


        for(int i=0; i<3; i++){
            cout<<arr[i]<<endl;
        }
        cout<<endl;
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;
    }

    return 0;
}
