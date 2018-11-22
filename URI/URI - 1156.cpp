#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    double sum = 1;
    int a=3,b=2;
    while(a<=39){
        sum += ((double)a/(double)b);
        a += 2;
        b *= 2;
    }
    printf("%.2lf\n",sum);

    return 0;
}

