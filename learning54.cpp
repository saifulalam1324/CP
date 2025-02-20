#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int l=0,r=n-1,f=0,s=0,l1=0,r1=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(l<=r)
    {
        if(l1<=r1)
        {
            l1+=a[l];
            f++;
            l++;
            cout<<l1<<endl;

        }
        else{
            r1+=a[r];
            s++;
            r--;

        }
    }
    cout<<f<<" "<<s<<endl;

    return 0;
}
