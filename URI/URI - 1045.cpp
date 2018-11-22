#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    double a,b,c;
    double arr[3];

    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF){
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;

        for(int i=0; i<3; i++){
            for(int j=0; j<2; j++){
                if(arr[j]<arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        if(arr[0]>=arr[1]+arr[2]){
            cout<<"NAO FORMA TRIANGULO"<<endl;
        }
        else if((arr[0]*arr[0])==(arr[1]*arr[1] + arr[2]*arr[2])){
            cout<<"TRIANGULO RETANGULO"<<endl;
        }
        else if((arr[0]*arr[0])>(arr[1]*arr[1] + arr[2]*arr[2])){
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        }
        else if((arr[0]*arr[0]) < (arr[1]*arr[1] + arr[2]*arr[2])){
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        }

        if(arr[0] == arr[1] == arr[2]){
            cout<<"TRIANGULO EQUILATERO"<<endl;
        }

        if((arr[0] == arr[1]) && (arr[0] == arr[2])){
            cout<<"TRIANGULO EQUILATERO"<<endl;
        }

        else if((arr[0] == arr[1]) || (arr[0] == arr[2]) || (arr[1] == arr[2]) ){
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }


    }

    return 0;
}
