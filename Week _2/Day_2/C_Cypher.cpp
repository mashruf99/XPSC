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

int answer(int a,string s)
{

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'D')
        {
            if (a == 9)
                a = 0;
            else
                a += 1;
        }
        else if (s[i] == 'U')
        {
            if (a == 0)
                a = 9;
            else
                a = a - 1;
        }
    }

    return a;
}

void ok()
{
    int n;
    cin >> n;
    vector<int> a(n), ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        cin>>s;
        ans[i] = answer(a[i],s);

    }
    

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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