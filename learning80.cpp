
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{   int tc;
    cin >> tc;
    while (tc--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0 ; i < n; i++) {
            cin >> v[i];
        }
        map<int , int> mp;
        for (int i : v) mp[i]++;
        int ans = 0;
        for (auto i : mp) {
            ans = max(ans , i.second);
        }
        cout << v.size() - ans;
        cout << endl;
    }
    return 0;
}
