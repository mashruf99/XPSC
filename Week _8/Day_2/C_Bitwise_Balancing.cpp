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
#define sz(x) (int)x.size()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vpii vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
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

void ok()
{
    ll b, c, d, a = 0;
    cin >> b >> c >> d;
    bool ans = true;
    for (int i = 0; i <= 62; i++)
    {
        bool chkB = false, chkC = false, chkD = false;
        if (b & (1LL << i))
            chkB = true;
        if (c & (1LL << i))
            chkC = true;
        if (d & (1LL << i))
            chkD = true;

        if (chkB == false && chkC == false && chkD == false)
            ;
        else if (chkB == false && chkC == false && chkD == true)
            a += (1LL << i);
        else if (chkB == false && chkC == true && chkD == false)
            a += (1LL << i);
        else if (chkB == false && chkC == true && chkD == true)
        {
            ans = false;
            break;
        }
        else if (chkB == true && chkC == false && chkD == false)
        {
            ans = false;
            break;
        }
        else if (chkB == true && chkC == false && chkD == true)
            a += (1LL << i);
        else if (chkB == true && chkC == true && chkD == false)
            a += (1LL << i);
        else if (chkB == true && chkC == true && chkD == true)
            ;
    }
    if (ans == true)
        cout << a << endl;
    else
        cout << -1 << endl;
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