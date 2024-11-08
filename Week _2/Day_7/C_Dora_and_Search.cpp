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
    int x = 1, y = n, x2 = 1, y2 = n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    while (x < y)
    {
        if (a[x] == x2)
        {
            x2++;
            x++;
        }

        else if (a[x] == y2)
        {
            y2--;
            x++;
        }

        else if (a[y] == x2)
        {
            x2++;
            y--;
        }

        else if (a[y] == y2)
        {
            y2--;
            y--;
        }

        else
            break;
    }
    if (x < y)
        cout << x << " " << y << "\n";
    else
        cout << "-1\n";
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