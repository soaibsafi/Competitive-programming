#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int a,b;

    while(scanf("%d:%d",&a,&b)==2){
        if(a==0 && b==0)
            break;
        int hour = a*30;
        int minute = b*6;
        double r = b*0.5;
        double result = abs(hour+r-minute);

        if(result>180)
            printf("%.3lf\n", (360-result));
        else
            printf("%.3lf\n", result);
        }
    return 0;
}
