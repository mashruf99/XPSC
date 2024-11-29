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
    for (auto &it : a)
        cin >> it;
    ll ans = 0;
    int cnt = 0;
    unordered_map<int, int> mp;
    for (int l = 0, r = 0; r < n; r++)
    {
        if (mp[a[r]] == 0)
        {
            cnt++;
        }
        mp[a[r]]++;
        while (cnt > m)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
                cnt--;
            l++;
        }
        ans += (r - l + 1);
    }

    cout << ans << endl;

    return 0;
}
