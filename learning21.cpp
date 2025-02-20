#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x,c=0;
    while(t--)
    {
        cin>>x;
        for(int i=1;i<=x;i++)
        {
            if(i%2!=0 && x%i!=0)
            {
                c++;
            }
        }
        if(c>0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
