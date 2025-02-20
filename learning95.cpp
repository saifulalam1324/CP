#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,c=0;
        cin>>n>>m;
        vector<string>s(n);
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++)
        {
            if(s[i].size()<= m)
            {
                c++;
                m-=s[i].size();
            }
            else{
                break;
            }
        }
        cout<<c<<endl;
    }
}
