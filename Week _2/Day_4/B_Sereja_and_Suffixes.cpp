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
    int n,m;
    cin>>n>>m;
    vector<int>a(n+1),cnt(n+1);

    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    set<int>s;

    for (int i = n; i >= 1; i--)
    {
        s.insert(a[i]);
        cnt[i] = s.size();
    }
    
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin>>x;
        cout<<cnt[x]<<endl;
    }
    
    


    return 0;
}