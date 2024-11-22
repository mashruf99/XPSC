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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int l = 0 ,r = 0;
    ll ans = 0;
    while (l<n && r<m)
    {
        int cur = a[l], cnt = 0,cnt2 = 0;
        while (l<n &&a[l]==cur)
        {
            cnt++;
            l++;
        }
        while (r<m &&b[r]<cur)
        {
            r++;
        }
        while (r<m &&b[r]==cur)
        {
            cnt2++;
            r++;
        }
    
        ans += (1ll * cnt * cnt2);
    }
    
    cout << ans << endl;

    return 0;
}