#include <iostream>
#include <string>

using namespace std;

int minRemovals(string s) {
    int n = s.length();
    int removals = 0;

    for (int i = 0; i < n - 2; i++) {
        if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') {
            removals++;
            i += 2;
        } else if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') {
            removals++;
            i += 2;
        }
    }

    return removals;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int result = minRemovals(s);
        cout << result << endl;
    }

    return 0;
}
