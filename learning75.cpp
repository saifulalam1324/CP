#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> notes(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> notes[i];
        }

        bool isPerfect = true;
        for (int i = 0; i < n - 1; ++i) {
            int interval = std::abs(notes[i + 1] - notes[i]);
            if (interval != 5 && interval != 7) {
                isPerfect = false;
                break;
            }
        }

        if (isPerfect) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
