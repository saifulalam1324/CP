#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a=m*n,b;
    if(m>n)
    {
        b=a/m;
    }
    else
    {
        b=a/n;
    }
    if(b%2==0)
    {
        cout<<"Malvika";
    }
    else{
        cout<<"Akshat";
    }

    return 0;
}
