#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,a,b,c;
    cin>>T;
    while(T--)
    {
        cin>>a>>b>>c;

        int a1=a+b;
        int b1=b+c;
        int c1=c+a;
        if(a1>=10 || b1>=10 || c1>=10)
        {
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
