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
    map<int,int> cnt;
    priority_queue<int>q;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }
    for(auto [x,y]: cnt){
        q.push(y);
    }

    while(!q.empty()){
        if(q.size() < 2){
            break;
        }
        int x,y;
        x= q.top();
        q.pop();
        y= q.top();
        q.pop();
        x--;
        y--;
        if(x>=1){
            q.push(x);
        }
        if(y>=1){
            q.push(y);
        }
    }
    int ans=0;
    while (!q.empty())
    {
        ans +=  q.top();
        q.pop();
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