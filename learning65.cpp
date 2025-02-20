#include<bits/stdc++.h>
using namespace std;
void Duplicate(int n,int a[])
{
    int count=0;
    sort(a,a+n);
    for(int i=0;i<n;i++)
        if(a[i]==a[i+1])
            count++;
    cout<<count<<endl;}

int main(){
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    Duplicate(n,a);}
