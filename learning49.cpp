#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    while(n--)
    {
        long long int x;
        cin>>x;
        if(x%2020 <= x/2020)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
