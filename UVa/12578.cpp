#include<iostream>
#include<cstdio>
#include<cmath>

#define Pi  acos(-1.0)

using namespace std;

int main()
{
    int T;
    double l,h,r,circleArea;
    scanf("%d",&T);
    while(T--){
        double l;
        scanf("%lf",&l);
        h = l*6/10;
        r = l/5;
        circleArea = Pi*r*r;

        printf("%.2lf %.2lf\n",circleArea,l*h-circleArea);
    }

    return 0;
}
