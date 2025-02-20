#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x,y,n,c;
    while(t--)
    {
        cin>>x>>y>>n;
        c=(n/x)*x;
        c+=y;
        if(c>n) c-=x;
        cout<<c<<'\n';
    }

    return 0;
}
