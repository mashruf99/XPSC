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
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    if (2 * mp[0] > n + 1)
    {
        if (mp[1] != 0 && mp[0] + mp[1] == n)
            cout << 2 << '\n';
        else
            cout << 1 << '\n';
    }
    else
    {
        cout << 0 << '\n';
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
