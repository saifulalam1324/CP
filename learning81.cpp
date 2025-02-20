#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for (int &i : v) cin >> i;

        vector<int> ck = v;
        sort(ck.begin() , ck.end());

        for (int i = 1 ; i < n ; i++) {
            if (v[i - 1] - v[i] == 1) {
                swap(v[i - 1] , v[i]); i++;
            }
        }
        if (v == ck) cout << "YES" ;
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
