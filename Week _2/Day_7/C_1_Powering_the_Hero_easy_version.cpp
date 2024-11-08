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
    ll n,ans = 0,x;
    cin >> n;
    priority_queue<ll>pq;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(x!=0) pq.push(x);
        if(x == 0){
            if(!pq.empty()){
                ans+=pq.top();
                pq.pop();
            }
            
            else continue;
        }
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