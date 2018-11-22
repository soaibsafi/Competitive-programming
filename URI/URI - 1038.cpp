#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF){
        switch (x){
        case 1:
            printf("Total: R$ %.2lf\n",y*4.00);
            break;

        case 2:
            printf("Total: R$ %.2lf\n",y*4.50);
            break;

        case 3:
            printf("Total: R$ %.2lf\n",y*5.00);
            break;

        case 4:
            printf("Total: R$ %.2lf\n",y*2.00);
            break;

        case 5:
            printf("Total: R$ %.2lf\n",y*1.50);
            break;

        default:
            break;
        }

    }

    return 0;
}
