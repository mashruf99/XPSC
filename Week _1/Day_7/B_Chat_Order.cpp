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
    unordered_set<string> mp;
    vector<string> ans;
    vector<string>a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = n-1; i >= 0; --i) {
        if (mp.find(a[i]) == mp.end()) {
            mp.insert(a[i]);
            ans.push_back(a[i]);
        }
    }
    for (auto it: ans) {
        cout <<it<< endl;
    }

    return 0;
}