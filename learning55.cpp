#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,l;
    cin>>s;
    long long int n=s.size(),c=0;
    bool flag=false,check=false;
    for(long long int i=0;i<s.size();i++)
    {
        if(s[i]=='A'||s[i]=='H'||s[i]=='I'||s[i]=='M'||s[i]=='O'||s[i]=='t'||s[i]=='U'||s[i]=='V'||s[i]=='X'||s[i]=='Y')
            {
                check=true;
            }
            else{
                check=false;
                break;
            }
    }
    if(check)
    {
        l=s;
        reverse(l.begin(),l.end());
        for(long long int i=0;i<n;i++)
        {
            if (s[i]==l[i])
            {
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }



    return 0;
}
