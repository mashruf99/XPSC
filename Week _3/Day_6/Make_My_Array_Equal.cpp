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
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    map<int, int> b;
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            if (b.find(a[i]) == b.end())
            {
                b[a[i]] = 1;
                c++;
            }
            else b[a[i]]++;
        }
    }

    if (c <= 1)
        yes;
    else
        no;
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
