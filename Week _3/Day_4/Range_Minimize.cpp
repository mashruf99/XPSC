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
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    int ans = INT_MAX,j=n-1;
    if (n <= 3) {
        ans = 0;
    } else {
        
        ans = min(ans, a[n-1] - a[2]);
        ans = min(ans, a[n-3] - a[0]);
        ans = min(ans, a[n-2] - a[1]); 
    }
    cout<<ans<<endl;

    
    
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