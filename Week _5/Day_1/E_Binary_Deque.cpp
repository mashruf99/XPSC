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
    int n, s, cnt = -1;
    cin >> n >> s;
    vector<int> a(n);

    for (auto &it : a)
        cin >> it;
    for (int r = 0, l = 0; r < n; r++)
    {
        s -= a[r];
        while (s < 0)
            s += a[l++];
        if (s == 0)
            cnt = max(cnt, r - l + 1);
    }
    if (cnt == -1)
        cout << -1 << endl;
    else
        cout << n - cnt << endl;
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