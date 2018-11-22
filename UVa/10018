#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n,c;
    long long int p,temp,sum, r, counter;
    cin>>n;

    while(n--){
        cin>>p;

        temp = p;
        c=0;

        while(1){
            sum=0;

            while(temp != 0){
                r = temp%10;
                sum = sum*10+r;
                temp = temp/10;
            }

            if(p==sum)
                break;
            else{
                temp = sum+p;
                p = sum+p;
                c++;
            }
        }
        cout<<c<<" "<<p<<endl;

    }

    return 0;
}
