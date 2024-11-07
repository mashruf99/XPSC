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
    int n, m;
    cin >> n >> m;

    map<int,set<int>> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x].insert(i);
    }

    for (int i = 0; i < m; i++)
    {
        int left,right;
        cin >> left >> right;
        if((mp.find(left)==mp.end()) || (mp.find(right)==mp.end()))no;
        else{
            int endindex,startindex;
            startindex = *mp[left].begin();
            endindex = *mp[right].rbegin();
            if(startindex<endindex)yes;
            else no;

        }
    }
    
    

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