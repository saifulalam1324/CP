#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;

        int a=s[0],b=s[1],c=s[2];
        int x=s[3],y=s[4],z=s[5];

        if(a+b+c == x+y+z)
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

