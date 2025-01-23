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
    int n;
    cin >> n;
    int x = 0, y = 0;
    string s;
    cin >> s;
    for (auto c : s)
    {
        if (c == 'N')
            y++;
        else if (c == 'S')
        {
            y--;
        }
        else if (c == 'W')
        {
            x--;
        }
        else
            x++;
    }
    if (abs(x) % 2 == 1 || abs(y) % 2 == 1)
        cout << "NO" << endl;
    else if (n == 2 && x == 0 && y == 0)
        cout << "NO" << endl;
    else
    {
        int nor = 0, sou = 0, wes = 1, eas = 1;
        char m[2] = {'R', 'H'};
        string ans = "";
        for (auto c : s)
        {
            if (c == 'N')
                ans += m[nor], nor = 1 - nor;
            else if (c == 'S')
                ans += m[sou], sou = 1 - sou;
            else if (c == 'W')
                ans += m[wes], wes = 1 - wes;
            else
                ans += m[eas], eas = 1 - eas;
        }
        cout << ans << '\n';
    }
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