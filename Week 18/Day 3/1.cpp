#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
{
            cin >> v[i];
            sum += v[i];
        }
        cout << sum - 2*v[n-2] << endl;
    }
}
