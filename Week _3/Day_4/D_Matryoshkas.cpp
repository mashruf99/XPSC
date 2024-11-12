 //MASHRUF's work

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
    int n,ans=0,last=0,cnt=0;
    cin >> n;
    vector<int>a(n);
    map<int,int>freq;
    for (int i = 0; i < n; i++)
    {  
        cin >> a[i];
        freq[a[i]]++;
    }

    for (auto it:freq)
    {
        if(it.first == last+1){
            if(cnt >= it.second){
                cnt = it.second;
                last = it.first;
            }
            else{
                ans+=(it.second - cnt);
                last = it.first;
                cnt = it.second;
            }
        }
        else{
            ans+= it.second;
            last = it.first;
            cnt =it.second;
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