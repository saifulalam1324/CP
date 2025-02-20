#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        char a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int l=a[n-1];
        for(int i=97;i<=l;++i)
        {
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
