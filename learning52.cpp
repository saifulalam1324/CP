#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    char arr[8][8];
    string ans = "";
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] != '.')
                ans += arr[i][j];
        }
    }

    cout << ans << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

}
