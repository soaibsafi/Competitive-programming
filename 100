#include<iostream>
#include<cmath>
using namespace std;

int uva100(int n){
    if(n==1) return 1;
    else if(n&1) return uva100(3*n+1)+1;
    else return uva100(n/2)+1;
}

int maxCycle(int a, int b){
    if(a>b)
        return maxCycle(b,a);
    int max = 0,cycle;
    while(a<=b){
        cycle = uva100(a);
        if(max<cycle) max = cycle;
        a++;
    }
    return max;
}

int main()
{
    int a,b;
    while(cin>>a>>b){
        cout<<a<<" "<<b<<" "<<maxCycle(a,b)<<endl;
    }
    return 0;
}
