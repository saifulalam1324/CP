#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,s;
    cin>>t;
    while (t--)
    {
        cin>>s;
        cout<<1<<" ";
        int j=1;
        for (int i = 2 ; i <= s ; i++) {
            cout << i + j << " ";
            j++;
        }
        cout << endl;
    }
    return 0;
}
