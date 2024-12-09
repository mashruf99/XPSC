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

    int x = 1, y = n*n;
    vector<int> v;
    for (int i = 1; i <= n*n; i++)
    {
        if (i % 2 == 1)
        {
            v.push_back(x);
            x++;
        }
        else
        {
            v.push_back(y);
            y--;
        }
    }
    x = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = x; j < x + n; j++)
                cout << v[j] << " ";
            cout << endl;
            x += n;
        }
        else
        {
            for (int j = (n + x) - 1; j >= x; j--)
                cout << v[j] << " ";
            cout << endl;
            x += n;
        }
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