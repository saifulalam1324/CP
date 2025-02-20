#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        char r = s[1];
        if (r == '>' && (s[0] - '0') > (s[2] - '0')) {
            cout << s << endl;
        }
        if (r == '>' && (s[0] - '0') < (s[2] - '0')) {
            cout <<s[0]<<'<'<<s[2] <<endl;
        }
        if (r == '<' && (s[0] - '0') < (s[2] - '0')) {
            cout<<s<<endl;
        }
        if (r == '<' && (s[0] - '0') > (s[2] - '0')) {
            cout <<s[0]<<'>'<<s[2] <<endl;
        }
        if (r == '=' && (s[0] - '0') < (s[2] - '0')) {
            cout<<s<<endl;
        }



    }
    return 0;
}
