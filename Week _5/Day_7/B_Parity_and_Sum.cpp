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
    vector<ll> a(n);
    ll even = 0, odd = 0, me = 0, mo = 0;
    bool ev = true, od = true;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            even++;
            me = max(me, a[i]);
            od = false;
        }
        else
        {
            odd++;
            mo = max(mo, a[i]);
            ev = false;
        }
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] < mo)
            mo += a[i];
    }
    if (ev || od)
        cout << 0 << endl;
    else if (mo > me)
        cout << even << endl;
    else
        cout << even + 1 << endl;
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