#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int T=24*60;
        int m=(a*60)+b;
        cout<<T-m<<endl;
    }

    return 0;
}
