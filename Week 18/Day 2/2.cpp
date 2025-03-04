#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    priority_queue<int> small_queue;
    priority_queue<int, vector<int>, greater<int>> big_queue;
    set<int> isnotEqual;

    for (int i = 0; i < n; i++) {
        int a, x;
        cin >> a >> x;
        if (a == 1) {
            small_queue.push(x);
        } else if (a == 2) {
            big_queue.push(x);
        } else if (a == 3) {
            isnotEqual.insert(x);
        }
    }

    int small = small_queue.top();
    int big = big_queue.top();

    if (small > big) {
        cout << 0 << endl;
        return;
    }

    int cnt = 0;
    for (int x : isnotEqual) {
        if (x >= small && x <= big) {
            cnt++;
        }
    }

    cout << big - small - cnt + 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
