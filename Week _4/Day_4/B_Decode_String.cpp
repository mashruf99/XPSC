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
    string ans ="";

    for (int i =a.size() -1; i >=0; )
    {
        if (a[i] =='0')
        {
            int num =(a[i -2] -'0') * 10 + (a[i -1] -'0');
            ans +=char('a' + num -1);
            i -=3;
        }
        else
        {
            ans +=char('a' + (a[i] -'0') -1);
            i--;
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
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
