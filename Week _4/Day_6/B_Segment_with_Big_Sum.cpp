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

int main()
{
    fast();
    int n;
    ll m;
    cin >> n >> m;
    vector<int>a(n);
    int l=0,r=0,ans=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
   
    ll sum = 0;
    
    for (r;r< n;r++)
    {
        sum+=a[r];

        while (sum>=m)
        {
            ans = min(ans, r-l + 1);
            sum -= a[l];
            l++;
        }
        
    }
    if(ans == INT_MAX)cout<< -1 <<endl;
    else cout<< ans <<endl;

    return 0;
}