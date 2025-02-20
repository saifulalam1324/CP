#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float person,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>person;
        sum=sum+person;
    }
    cout<<ceil(sum/4)<<endl;

    return 0;
}
