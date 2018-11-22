#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    long long int tot_mon=0;
    char str[10],str1[10], don[10]={"donate"}, rpt[10]={"report"};


    cin>>t;
    while(t)
    {
        int k;
        scanf("%s %d", str, &k);
        fflush(stdin);
        if(strcmp(str,don)==0)
        {
            tot_mon +=k;
        }
        else if(strcmp(str, rpt)==0)
        {
            cout<<tot_mon<<endl;
        }

        --t;
    }
    return 0;
}
