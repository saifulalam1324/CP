#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l;
    cin>>t;
    int x;
    while(t--)
    {
        cin>>x;
        for(int i=1;i<=x;i++)
        {
            l=__gcd(x,i);
            if(x==l+i)
            {
                cout<<i<<endl;
                break;
            }
        }

    }


    return 0;
}

