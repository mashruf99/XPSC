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
    cin >> n;
    unordered_map<string,string>mp;
    while (n--)
    {
        string old,neww;
        cin>>old>>neww;
        bool ok = false;
        for (auto it:mp)
        {
            if(it.second == old){
                mp[it.first] = neww;
                ok = true;
            }
        }
        if(!ok)mp[old] = neww;
    }
    cout<<mp.size()<<endl;
    for (auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}