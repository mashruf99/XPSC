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

int main()
{
    fast();
    int n;
    ll m;
    cin >> n >> m;
    vector<ll> a(n);
    for (auto &it : a)
        cin >> it;

    int l = 0, r = 0;
    ll ans = 0;
    multiset<ll> ml;

    for (int r = 0; r < n; r++) {
        ml.insert(a[r]);
        while (*ml.rbegin() - *ml.begin() > m) {
            ml.erase(ml.find(a[l]));
            l++;
        }
        ans += (r - l + 1);
    }
    cout<< ans << endl;

    return 0;
}