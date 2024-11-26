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
    int m = (n * (n - 1)) / 2;
    vector<int> a(m);
    vector<int> b(n);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < m; i += --n)
        cout << a[i] << " ";
    cout << 1000000000 << endl;
   
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