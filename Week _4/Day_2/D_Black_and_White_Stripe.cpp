// MASHRUF's work

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define mp make_pair
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define endl '\n'
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)




void ok()
{
    int n , k;
    cin >> n >> k;
    string a;
    cin >> a;

    int l = 0,r = 0,ans = INT_MAX,cnt=0;

    for (int i = 0; i < k; i++) {
        if (a[i] == 'W') cnt++;
    }
    ans = cnt;
   
   for (int i = k; i < n; i++) {
        if (a[i - k] == 'W') cnt--;
        if (a[i] == 'W') cnt++;
        ans = min(ans, cnt);
    }
    
    cout<< ans <<endl;
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