#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int T;
    double x,y,z;
    double result;
    cin>>T;
    while(T--){
        cin>>x>>y>>z;
        result = (z*(x-(x+y)/3))/((x+y)/3);
        printf("%.0lf\n",result);
    }
    return 0;
}
