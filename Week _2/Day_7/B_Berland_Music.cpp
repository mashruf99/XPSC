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
    int a[n],b[n];
    map<int, int> mp;
    set<int> like,dislike;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        mp[a[i]] = i;
    }

    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0') dislike.insert(a[i]);
        else like.insert(a[i]);
    }
    sort(a, a + n, greater<int>());

    int i = 0;
    for (auto it = like.rbegin(); it != like.rend(); ++it)
    {
        b[mp[*it]] = a[i++];
    }
    for (auto it = dislike.rbegin(); it != dislike.rend(); ++it)
    {
        b[mp[*it]] = a[i++];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
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