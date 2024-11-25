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
    ll n,c,ans=0,sum=0;
    cin >> n >> c;

    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] += i+1;
    }

    sort(a.begin(),a.end());

    for (int i = 0; i < n; i++)
    {
        if(sum+a[i] > c)break;
        sum+=a[i];
        ans++;
    }
    cout<< ans << endl;
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