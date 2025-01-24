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
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vpii vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define each(x, a) for (auto &x : a)
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define mem(a, b) memset(a, b, sizeof(a))
#define dbg(x) cout << #x << " = " << x << '\n'
#define dbg2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << '\n'
#define dbg3(x, y, z) cout << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << '\n'
#define dbg4(w, x, y, z) cout << #w << " = " << w << ", " << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << '\n'
#define dbg5(v, w, x, y, z) cout << #v << " = " << v << ", " << #w << " = " << w << ", " << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << '\n'
#define dbg6(u, v, w, x, y, z) cout << #u << " = " << u << ", " << #v << " = " << v << ", " << #w << " = " << w << ", " << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << '\n'

void ok()
{
    int n;
    cin >> n;
    vector<int> a(n,0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i]-=x;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i]+=x;
    }
    sort(a.begin(),a.end(),greater<int>());

    int ans = 0,l=0,r=n-1;
    while (l<r)
    {
        if(a[l]>-1 && a[r]>-1){
            ans++;
            l++;
            r--;
        }
        else if (a[l]<0 && a[r]<0)
        {
            break;
        }
        else if (a[l]>-1)
        {
            if(a[l]>=abs(a[r])){
                ans++;
                l++;
                r--;
            }
            else r--;
        }
        
        
    }
    cout<< ans<<endl;
    
    
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