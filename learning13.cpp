#include<bits/stdc++.h>>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int a,b,a1=0,b1=0;
    while(T--)
    {
        cin>>a>>b;
        if(a>b)
        {
            a1++;
        }
        else if(b>a){
            b1++;
        }
    }
    if(a1>b1)
    {
        cout<<"Mishka"<<endl;
    }
    else if(b1>a1)
    {
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }

    return 0;
}
