// MASHRUF's work

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define mp make_pair

void ok()
{

    int n, ans = 3;
    cin >> n;
    int a[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[a[i]] == i)
            ans = 2;
    }
    cout << ans << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        ok();
    }

    return 0;
}