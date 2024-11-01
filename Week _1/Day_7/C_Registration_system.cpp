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
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    string a;

    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        if (mp.find(a) == mp.end())
        {
            mp[a] = 1;
            cout << "OK" << endl;
        }
        else
        {
            mp[a]++;
            cout << a <<mp[a]-1 << endl;
        }
    }
    return 0;
}