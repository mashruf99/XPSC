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
    vector<int> a(n);
    int l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll sum = 0,ans = 0;

    while (r < n)
    {
        sum += a[r];
        if (sum <= m)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (sum > m && l<=r)
            {
                sum -= a[l];
                l++;
            }
            if (sum <= m)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }

    cout << ans << endl;

    return 0;
}