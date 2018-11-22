#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    double n1, n2, n3, n4;

    while(scanf("%lf%lf%lf%lf", &n1,&n2,&n3,&n4)!=EOF){
        double sum=0, avg = 0;


        sum= n1*2+n2*3+n3*4+n4*1;
        avg = sum/10;

        if(avg>= 7.0){
            printf("Media: %.1lf\n",avg);
            printf("Aluno aprovado.\n");
        }
        else if(avg<5.0){
            printf("Media: %.1lf\n",avg);
            printf("Aluno reprovado.\n");
        }

        else if(avg >= 5.0 && avg <= 6.9){
            printf("Media: %.1lf\n",avg);
            printf("Aluno em exame.\n");
            double extra;
            scanf("%lf",&extra);
            printf("Nota do exame: %.1lf\n",extra);
            avg += extra;
            avg /=2;

            if(avg>= 5.0){
                printf("Aluno aprovado.\n");
                printf("Media final: %.1lf\n",avg);
            }
            else if(avg<5.0){
                printf("Aluno reprovado.\n");
                printf("Media final: %.1lf\n",avg);
            }

        }
    }

    return 0;
}
