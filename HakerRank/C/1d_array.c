#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, val, sum=0;
    scanf("%d", &n);
    for(int i=0; i< n; i++)
    {
        scanf("%d", &val);
        sum += val;
    }
    printf("%d", sum);
    
    return 0;
}