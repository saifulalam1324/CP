#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,a;
    cin>>T;
    while(T--)
    {
        cin>>a;
        int n[a],c=0,d=0;
        for(int i=0;i<a;i++)
        {
            cin>>n[i];
            if(n[i]==1)
            {
                c++;
            }
            else if(n[i]==2)
            {
                d++;
            }
        }
        if(c%2==0 && d%2==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }


    return 0;
}
