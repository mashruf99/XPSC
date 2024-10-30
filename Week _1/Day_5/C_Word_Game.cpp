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
    cin>>n;
    map<string,int>mp;
    vector<string>a[3];
    for (int i = 0; i < 3; i++)
    {
        a[i].resize(n);
        for(int j=0; j<n ; j++){
            cin>>a[i][j];
            mp[a[i][j]]++;
        }
    }
    
    int ans[3]={0};
    for (int i = 0; i < 3; i++)
    {
        for(int j=0; j<n ; j++){
            if(mp[a[i][j]]==1)ans[i]+=3;
            else if (mp[a[i][j]] == 2)
            {
                ans[i]+=1;
            }
            
        }
    }
    cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;

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