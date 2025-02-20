#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    while(n--)
    {
        cin>>x;
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=x;j++)
            {
                if(i*j%2==1)
                {
                    cout<<"##\n";
                    cout<<"##\n";
                }
                else{
                    cout<<"**\n";
                    cout<<"**\n";

                }

            }
        }
        cout<<endl;
    }


    return 0;
}
