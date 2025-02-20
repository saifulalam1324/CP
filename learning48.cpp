#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0;
        cin>>n;
        int a;
        for(int i=0;i<2*n;i++)
        {
            cin>>a;
            s+= a%2;
        }

        if(s==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
