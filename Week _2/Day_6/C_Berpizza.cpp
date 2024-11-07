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
    int t,serial=0;
    cin >> t;
    set<pair<int,int>> index;
    multiset<pair<int,int>> money;
    vector<int>ans;
    for(int i = 1; i <= t; i++){
        int a,b;
        cin >> a;
        if(a == 1){
            cin>>b;
            serial++;
            index.insert({serial,b});
            money.insert({b,-serial});

        }
        else if (a == 2)
        {
             int pos = index.begin()->first, cnt = index.begin()->second;
             ans.push_back(pos);
             index.erase(index.begin());
             money.erase({cnt,-pos});
        
        }
        else if (a == 3 )
        {
            int pos = -money.rbegin()->second, cnt = money.rbegin()->first;
            ans.push_back(pos);      
            money.erase(--money.end());
            index.erase({pos,cnt});   
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    

    return 0;
}