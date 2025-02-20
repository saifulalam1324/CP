#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int a,b,c;
    while(T--)
    {
        cin>>a>>b>>c;

        if((a>b && b>c)||(a<b && b<c))
        {
            cout<<b<<endl;
        }
        else if((b>a && a>c)||(b<a && a<c))
        {
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }

    }

    return 0;
}
