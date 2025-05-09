    #include <bits/stdc++.h>
    #define ll long long int
    #define nline '\n'
    using namespace std;

    void solve()
    {
        ll n;
        cin >> n;

        ll arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        bool isStrictIncrease = true;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] <= arr[i - 1])
                isStrictIncrease = false;
        }

        if (isStrictIncrease)
            cout << "YES\n";
        else
            cout << "NO\n";
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
