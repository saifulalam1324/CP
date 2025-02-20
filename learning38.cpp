#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string str="Timru";
        int n;
        string s;
        cin>>n;
        cin>>s;
        sort(s.begin(), s.end());
		if (s == str)
			cout << "YES\n";
		else
			cout << "NO\n";


    }

    return 0;
}
