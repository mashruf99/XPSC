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
    string a;
    cin >> a;
    if (n == 1)
        cout << 0 << endl;
    else
    {
        int ans1 = 0,ans2 = 0,ans;
        bool chk1 = false,chk2 = false;

        for (char c : a)
        {
            if (c == '1')
            {
                if (!chk1)
                {
                    ans1++;
                    chk1 = true;
                }
            }
            else
            {
                chk1 = false;
            }

            if (c == '0')
            {
                if (!chk2)
                {
                    ans2++;
                    chk2 = true;
                }
            }
            else
            {
                chk2 = false;
            }
        }
        ans = min(ans1,ans2);
        cout << ans << '\n';
    }
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