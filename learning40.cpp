#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float n,x;
        cin>>n>>x;
        if(n<=2){
            cout<<"1"<<"\n";
            continue;
        }

        cout<<ceil((n-2)/x)+1<<"\n";
    }

    return 0;
}
