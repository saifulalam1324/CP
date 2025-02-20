#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s,r;
        cin>>s>>r;

        cout<<r[0]<<s[1]<<s[2]<<" "<<s[0]<<r[1]<<r[2]<<endl;
    }

    return 0;
}
