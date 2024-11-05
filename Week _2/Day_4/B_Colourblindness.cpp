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
    string a,b;
    cin>>a>>b;
    bool ans = true;

    for (int i = 0; i < n; i++)
    {
        if(a[i]=='R' && (b[i]=='B' || b[i]=='G')){
            ans=false;
            break;
        }
        if(a[i]=='B' && (b[i]=='R')){
            ans=false;
            break;
        }
        if(a[i]=='G' && (b[i]=='R')){
            ans=false;
            break;
        }
    }

    if(ans)yes;
    else no;
    

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