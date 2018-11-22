#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double sal,inc;
    while(scanf("%lf", &sal)!=EOF){
        if(sal>=0.00 && sal <= 400.00){
            inc = (15*sal)/100;
            printf("Novo salario: %.2lf\n", sal+inc);
            printf("Reajuste ganho: %.2lf\n", inc);
            printf("Novo salario: %d %%\n", 15);
        }
        else if(sal>=400.01 && sal <= 800.00){
            inc = (12*sal)/100;
            printf("Novo salario: %.2lf\n", sal+inc);
            printf("Reajuste ganho: %.2lf\n", inc);
            printf("Novo salario: %d %%\n", 12);
        }
        else if(sal>=800.01 && sal <= 1200.00){
            inc = (10*sal)/100;
            printf("Novo salario: %.2lf\n", sal+inc);
            printf("Reajuste ganho: %.2lf\n", inc);
            printf("Novo salario: %d %%\n", 10);
        }
        else if(sal>=1200.01 && sal <= 2000.00){
            inc = (7*sal)/100;
            printf("Novo salario: %.2lf\n", sal+inc);
            printf("Reajuste ganho: %.2lf\n", inc);
            printf("Novo salario: %d %%\n", 7);
        }
        else if(sal>2000.00){
            inc = (4*sal)/100;
            printf("Novo salario: %.2lf\n", sal+inc);
            printf("Reajuste ganho: %.2lf\n", inc);
            printf("Novo salario: %d %%\n", 4);
        }
    }

    return 0;
}
