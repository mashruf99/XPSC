// MASHRUF's work

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define mp make_pair
#define no cout << "nO" << '\n'
#define yes cout << "YES" << '\n'
#define endl '\n'
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main()
{
    fast();
    int n;
    cin >> n;
    if (n < 10)
    {
        cout << "000" << n << endl;
    }
    else if (n < 100)
    {
        cout << "00" << n << endl;
    }
    else if (n < 1000)
    {
        cout << "0" << n << endl;
    }
    else
    {
        cout << n << endl;
    }
    return 0;
}