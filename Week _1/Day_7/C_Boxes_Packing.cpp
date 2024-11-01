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
    int t;
    cin >> t;
    vector<int>a(t);
    unordered_map<int,int>p;
    for (int i = 0; i < t; i++)
    {
        cin >>a[i];
        p[a[i]]++;
    }
    int ans  = 0;

    for(auto it : p){
        ans = max(ans, it.second);
    }
    cout<<ans<<endl;
    

    return 0;
}