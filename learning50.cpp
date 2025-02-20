#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,l=a++;
    cin>>a>>b;
    for(int i=1;i<=b;i++)
    {
        if(l%i==0)
        {
            c++;
        }

    }
    if(c==2 && l==b)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
