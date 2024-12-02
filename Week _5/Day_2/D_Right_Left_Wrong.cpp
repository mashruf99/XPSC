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

void ok()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<long long> ps(n);
    for (auto &it : a) cin >> it;

    string s;
    cin >> s;
    ps[0] = a[0];
    for (int i = 1; i < n; i++) {
        ps[i] = ps[i - 1] + a[i];
    }

    int l = 0, r = n - 1;
    ll ans = 0;
    while (l < r) {
        while (l < r && s[l] != 'L') l++;
        while (l < r && s[r] != 'R') r--;
        if (l < r) {
            // if(l > 0)ans += ps[r] - ps[l - 1] ;
            // else ans += ps[r] - 0;
            ans += ps[r] - (l > 0 ? ps[l - 1] : 0);
            l++;
            r--;
        }
    }

    cout << ans << endl;
}

int main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        ok();
    }

    return 0;
}