#include <iostream>
using namespace std;

int main() {
    int c = 0;
    int l1 = 0, l2 = 0, l3 = 0;

    int n, in;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> in;

        if (in == 1) l1++;
        else if (in == 2) l2++;
        else if (in == 3) l3++;
        else if (in == 4) c++;
    }

    if (l3 >= l1) {
        c += l3;

        if (l2 % 2 == 0)
            c += l2 / 2;
        else
            c += l2 / 2 + 1;

        cout << c << endl;
        return 0;
    } else {
        c += l3;
        l1 -= l3;

        if (l2 % 2 == 0) {
            c += l2 / 2;
        } else {
            c += l2 / 2 + 1;
            l1 -= 2;
        }

        if (l1 > 0) {
            if (l1 % 4 == 0)
                c += l1 / 4;
            else
                c += l1 / 4 + 1;
        }

        cout << c << endl;
        return 0;
    }
}
