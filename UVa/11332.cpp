#include<iostream>
using namespace std;
int main()
{
    int n;
    while((cin>>n)&&(n!=0)){
    n %= 9;
    if(n==0)
        cout<<9<<endl;
    else
        cout<<n<<endl;
    }

    return 0;
}
