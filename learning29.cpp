#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    string s;
    while(T--)
    {
        cin>>s;
        int l=s.length();
        int l1=s.length()/2;
        string h1=s.substr(0,l1);
        string h2=s.substr(l1);
        if(l%2==0 &&(h1==h2) )
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
