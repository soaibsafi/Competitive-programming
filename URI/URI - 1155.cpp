#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    double sum = 0;
    for(int i=1; i<=100; i++){
        double t = (1/(double)i);
        sum += t;
    }
    printf("%.2lf\n",sum);

    return 0;
}
