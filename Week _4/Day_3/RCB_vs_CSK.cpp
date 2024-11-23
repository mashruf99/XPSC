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
    int a, b;
    cin >> a >> b;
    if (abs(a - b) >= 18)
        cout << "RCB" << endl;
    else
        cout << "CSK" << endl;
}

int main()
{
    fast();

    ok();

    return 0;
}