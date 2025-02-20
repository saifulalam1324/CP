#include<bits/stdc++.h>
using namespace std;
int main()
{

    int T,x;
    cin>>T;
    while(T--)
    {
        cin>>x;
        if(1900<=x)
        {
            cout<<"Division 1"<<endl;
        }
        else if(1600<=x && x<=1899)
        {
            cout<<"Division 2"<<endl;
        }
        else if(1400<=x && x<=1599)
        {
            cout<<"Division 3"<<endl;
        }
        else {
            cout<<"Division 4"<<endl;
        }
    }

    return 0;
}
