#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> st;               // Stack representing the printer's memory
    vector<int> unprinted;        // To store the indices of unprinted documents

    for (int i = 1; i <= n; i++) {
        char cmd = s[i - 1];

        if (cmd == '1') {
            // Push document i into memory
            st.push_back(i);
        } else if (cmd == '2') {
            if (!st.empty()) {
                // Topmost document from memory is printed
                st.pop_back();
                // Document i itself is NOT printed
                unprinted.push_back(i);
            } else {
                // Memory is empty; document i is printed directly
                // Nothing goes into unprinted
            }
        } else if (cmd == '3') {
            // Document i is printed directly
            // Nothing goes into unprinted
        }
    }

    // Any documents left in the stack were never printed
    for (int doc : st) {
        unprinted.push_back(doc);
    }

    // Sort unprinted documents in increasing order
    sort(unprinted.begin(), unprinted.end());

    // Output results
    cout << unprinted.size() << "\n";
    for (int j = 0; j < (int)unprinted.size(); j++) {
        cout << unprinted[j] << (j + 1 == (int)unprinted.size() ? "" : " ");
    }
    cout << "\n";
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