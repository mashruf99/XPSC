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
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (ll) x.size()
#define pii pair<ll, ll>
#define pll pair<ll, ll>
#define vi vector<ll>
#define vll vector<ll>
#define vvi vector<vector<ll>>
#define vvl vector<vector<ll>>
#define vpii vector<pair<ll, ll>>
#define vpll vector<pair<ll, ll>>
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define rrep(i, a, b) for (ll i = a; i >= b; i--)
#define rrep(i, a, b) for (ll i = a; i >= b; i--)
#define rrep(i, a, b) for (ll i = a; i >= b; i--)
#define each(x, a) for (auto &x : a)
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define mem(a, b) memset(a, b, sizeof(a))
#define dbg(x) cout << #x << " = " << x << '\n'
#define dbg2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << '\n'
#define dbg3(x, y, z) cout << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << '\n'
#define dbg4(w, x, y, z) cout << #w << " = " << w << ", " << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << '\n'
#define dbg5(v, w, x, y, z) cout << #v << " = " << v << ", " << #w << " = " << w << ", " << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << '\n'
#define dbg6(u, v, w, x, y, z) cout << #u << " = " << u << ", " << #v << " = " << v << ", " << #w << " = " << w << ", " << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << '\n'

ll k, n;
vector<ll> v;
bool good(ll m)
{
    ll nos = m * k;
    for (ll i = 0; i < n; i++)
        nos -= min(v[i], m);
    return nos <= 0;
}

int main()
{
    fast();
    cin >> k >> n;
    v.resize(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    ll l = 0, r = 1;
    while (good(r))
    {
        r *= 2;
        while (r > l + 1)
        {
            ll m = (l + r) / 2;
            if (good(m))
                l = m;
            else
                r = m;
        }
    }

    cout << l;
}