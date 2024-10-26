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
    int a,b;
    cin>>a>>b;
    int ans = 0;
    for (int i = 0; i < 2; i++)
    {
        if(a>=b){
            ans+=a;
            a--;
        }
        else{
            ans+=b;
            b--;
        }
    }
    cout<<ans;
    
    return 0;
}