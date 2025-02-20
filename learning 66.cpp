#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x>y)
        {
            cout<<y<<" "<<x<<endl;
        }
        else if(y>x){
            cout<<x<<" "<<y<<endl;
        }
        else if(x==y)
        {
            cout<<x<<" "<<y<<endl;
        }

    }
}
