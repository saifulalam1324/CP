#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t,c=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if((t+k) <=5){
            c++;
        }
    }
    cout<< c/3 <<endl;

    return 0;
}
