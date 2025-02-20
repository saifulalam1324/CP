#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n; cin >> n;
        vector<ll> v(n);
        map<ll , ll> mp;
        for (ll &i : v) cin >> i , mp[i]++;;

        sort(v.begin() , v.end());
        ll a = 0 , b = 0;
        for (ll i : v) {
            mp[i]--;
            if ((n - 2) % i == 0 &&  mp[(n - 2) / i] != 0) {
                a = i , b = (n - 2) / i;
                mp[i]++;
                break;
            }
            mp[i]++;
        }
        cout << a << " " << b; cout << endl;
    }
    return 0;
}
