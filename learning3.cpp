#include<bits/stdc++.h>
using namespace std;
int main(){


    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    sort(a,a+n);
    for(int i=0;i<n;++i)
    {
        c += abs ((a[n-1]) - a[i]);
    }
    cout<<c<<endl;



    return 0;

}
