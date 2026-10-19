#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;

    // Option 1: Alice takes all c stones immediately
    long long take_all = llabs((a + c) - b);

    // Option 2: Alice passes (takes 0), effective only when b > a
    long long pass = b - a;

    long long ans = max(take_all, pass);
    cout << ans << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}