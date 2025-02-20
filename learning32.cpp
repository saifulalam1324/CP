#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,one=0,two=0,three=0,four=0;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            one++;
        }
        else if(s[i]=='2')
        {
            two++;
        }
        else if(s[i]=='3')
        {
            three++;
        }
        else{
            four++;
        }
    }
    cout<<a*one+b*two+c*three+d*four<<endl;

    return 0;
}
