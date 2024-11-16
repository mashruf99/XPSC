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
    long long int n, m, h;
    cin >> n >> m >> h;

    long long int c[n], o[m];
    for (long long int i = 0; i < n; i++)
        cin >> c[i];
    for (long long int i = 0; i < m; i++)
        cin >> o[i];

    sort(c, c + n);
    sort(o, o + m);

    long long int cEnd = n - 1;
    long long int oEnd = m - 1;

    long long int answer1 = 0;
    while (cEnd >= 0 && oEnd >= 0)
    {
        long long int cap = c[cEnd];
        long long int out = o[oEnd];
        answer1 += min(cap, h * out);
        cEnd--;
        oEnd--;
    }

    cEnd = 0;
    oEnd = 0;

    long long int answer2 = 0;
    while (cEnd < n && oEnd < m)
    {
        long long int cap = c[cEnd];
        long long int out = o[oEnd];
        answer2 += min(cap, h * out);
        cEnd++;
        oEnd++;
    }

    cout << max(answer1, answer2) << endl;
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