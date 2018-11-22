#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    double num,sum = 0;
    int flag = 0;
    while(true){
        if(flag==2)
            break;
            cin>>num;
        if(num>=0.0 && num<=10.0){
            sum += num;
            flag++;
        }
        else{
            cout<<"nota invalida"<<endl;
        }
    }
    printf("media = %.2lf\n", sum/2.0);
    return 0;
}
