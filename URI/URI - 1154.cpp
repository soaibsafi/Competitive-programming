#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int x;
    int c=0;
    double sum=0;

    while(cin>>x){
        if(x<0)
            break;
        c++;
        sum = sum+x;
    }
    printf("%.2lf\n", (sum*1.0/c));

    return 0;
}
