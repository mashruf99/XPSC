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
    int n,k,q;
    cin >> n >> k >> q;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0,cons = 0;

    for (int i = 0; i < n; i++)
    {
        if(a[i] <= q){
            cons++;
            if(i==n-1 || a[i+1]>q){
                if(cons >= k){
                    ll x = cons-k+1ll;
                    ll add = (x*(x+1ll))/2ll;
                    ans+=add;
                }
                cons=0;
            }
        }
    }
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