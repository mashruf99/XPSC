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
    int n,k ;
 
    cin>>n>>k;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'B')
        {
            ans++;
            i+= k-1;
        }
 
    }
    cout<<ans<<'\n';

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