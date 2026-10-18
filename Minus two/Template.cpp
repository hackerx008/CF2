#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (auto &x : vec) cin >> x;

    int mod_4[] = {0, 0, 0, 0};
    for (auto &x : vec) mod_4[x % 4]++;

    cout << max({mod_4[0], mod_4[2], mod_4[1] + mod_4[3]}) << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}// this is my new startpoint now iam starting to code heheha.