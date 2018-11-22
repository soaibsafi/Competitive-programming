#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int arr[100];
    int res[100];
    int n,index;

    for(int i=0; i<100; i++){
        cin>>arr[i];
    }

    for(int i=0; i<100; i++){
        res[i] = arr[i];
    }
    for(int i=0; i<100;i++)
	{
		for(int j=i+1; j<100;j++)
		{
			if(res[i]>res[j])
			{
				int temp=res[i];
				res[i]=res[j];
				res[j]=temp;
			}
		}
	}
	n = res[99];
    for(int i=0; i<100; i++){
        if(arr[i]==n){
            index = i+1;
            break;
        }
    }
    cout<<n<<endl<<index<<endl;

    return 0;
}
