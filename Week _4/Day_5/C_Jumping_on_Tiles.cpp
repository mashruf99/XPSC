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
    string s;
    cin >> s;
    int n = s.size();
    char first = s[0], last = s[s.size() - 1];
    int sum = abs(int(first - last));

    vector<pair<char, int>> ans;

    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] <= first && s[i] >= last || s[i] >= first && s[i] <= last)
        {
            ans.push_back({s[i], i + 1});
        }
    }
    sort(ans.begin(), ans.end());
    if (s[0] > s[n - 1])
        reverse(ans.begin(), ans.end());

    cout << sum << " " << ans.size() + 2 << endl;
    cout<<1<<" ";
    for (auto it : ans)
    {
        cout << it.second << " ";
    }
    cout<<s.size()<<endl;
    //cout << endl;
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