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

ll GCD(ll a, ll b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

ll LCM(ll a, ll b)
{
    return a / GCD(a, b) * b;
}

int main()
{
    fast();
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll cnt1 = (n / a) * p;
    ll cnt2 = (n / b) * q;
    ll overlap = (n / LCM(a, b));
    ll ans = cnt1 + cnt2 - overlap * (p + q) + overlap * max(p, q);
    cout << ans << endl;
    return 0;
}