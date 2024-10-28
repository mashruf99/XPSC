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
    cin >> n;
    ll a[n];
    ll s = 0, mo = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
        if (a[i] % 2 != 0)
        {
            mo = min(mo, a[i]);
        }
    }
    if (s % 2 == 0)
        cout << s;
    else
        cout << (s - mo);

    return 0;
}