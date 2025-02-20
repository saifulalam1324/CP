#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int x;
    for(int i=0;i<t;i++)
    {

        cin>>x;
        int c=0;
        for(int j=1;j<=x;j++)
        {
            if(x%j==0)
            {
                c++;
            }
        }
        if(c==3)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
