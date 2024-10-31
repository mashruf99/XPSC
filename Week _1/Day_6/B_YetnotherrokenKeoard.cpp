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
    string st;
    cin >> st;
    int n = st.size();
    vector<int> c, s;
    vector<bool> chk(n, true);
    for (int i = 0; i < n; i++)
    {
        if (st[i] == 'b')
        {
            if (!s.empty())
            {
                chk[s.back()] = false;
                s.pop_back();
            }
            chk[i] = false;
        }
        else if (st[i] == 'B')
        {
            if (!c.empty())
            {
                chk[c.back()] = false;
                c.pop_back();
            }
            chk[i] = false;
        }
        else if (st[i] >= 'A' && st[i] <= 'Z')
        {
            c.push_back(i);
        }
        else if (st[i] >= 'a' && st[i] <= 'z')
        {
            s.push_back(i);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (chk[i])
            cout << st[i];
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
