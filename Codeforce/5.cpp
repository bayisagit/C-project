#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, a, b;
        cin >> x >> y >> a >> b;

        // Calculate the cost to make x and y equal to zero simultaneously
        long long cost = 0;

        // Case 1: Pay a dollars to make x or y zero
        if (a * 2 <= b) {
            cost = static_cast<long long>(a) * (x + y);
        } else {
            int min_val = min(x, y);
            x -= min_val;
            y -= min_val;
            cost = static_cast<long long>(b) * min_val + static_cast<long long>(a) * (x + y);
        }

        cout << cost << endl;
    }

    return 0;
}

