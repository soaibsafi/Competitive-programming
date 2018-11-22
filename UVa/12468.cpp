#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l;
        while(scanf("%d%d",&i,&j)==2)
        {
            if(i==-1 && j==-1)
                break;
            else
            {
                k=abs(i-j);
                if(k>50)
                    l=100-k;
                else
                    l=k;
                cout<<l<<endl;
            }
        }
    return 0;
}
