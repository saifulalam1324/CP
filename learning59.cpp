#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    bool check=false;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        int a[t];
        for(int i=0;i<t;i++)
        {
            cin>>a[i];
        }
        sort(a,a+t);
        for(int i=0;i<t;++i)
        {
            if(a[i]==a[i+1])
            {
                c++;
                if(c=3)
                {
                    cout<<a[i]<<endl;
                }
                else{
                cout<<-1<<endl;
                }
            }

        }

    }

    return 0;
}
