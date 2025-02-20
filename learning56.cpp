#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],c1[]={};
    while(n--)
    {
        int t;
        cin>>t;
        int b[t];
        for(int i=0;i<t;i++)
        {
            cin>>b[i];
            if(b[i]==0)
            {
                c1[i]=i;
            }
        }
        cout<<c1<<endl;

    }


    return 0;
}
