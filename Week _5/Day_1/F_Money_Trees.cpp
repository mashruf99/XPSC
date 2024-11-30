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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), h(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : h)
        cin >> it;

    ll current = a[0];
    ll ans = 0;
    ll l = 0, r = 1;
    if (current <= k) ans = 1;
    while (r < n)
    {
        if (h[r - 1] % h[r] == 0)
            current += a[r];
        else
            current = a[r], l = r;
        while (current > k)
            current -= a[l++];
        ans = max(ans, r - l + 1);
        r++;
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
