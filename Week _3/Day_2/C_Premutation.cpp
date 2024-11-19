// MASHRUF's work
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define mp make_pair
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define endl '\n'
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> in(n, vector<int>(n-1)); 
    map<int, int> freq;
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            cin >> in[i][j];
        }
        freq[in[i][n-2]]++;
        mp[in[i][n-2]] = i;
    }

    int idx = 0, val = 0;
    for (auto it : freq) {
        if (it.second == 1) {
            idx = it.first;
        } else {
            val = it.first;
        }
    }

    for (int i = 0; i < n-1; i++) {
        cout << in[mp[idx]][i] << " ";
    }
    cout << val << endl;
}

int main()
{
    fast();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
