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
    int l = 0, r = 0;
    vector<int> a(n), b(m), ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    while (l < n && r < m)
    {
        if (a[l] <= b[r])
        {
            ans.push_back(a[l]);
            l++;
        }
        else
        {
            ans.push_back(b[r]);
            r++;
        }
    }
    while (l < n)
    {
        ans.push_back(a[l]);
        l++;
    }
    while (r < m)
    {
        ans.push_back(b[r]);
        r++;
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}