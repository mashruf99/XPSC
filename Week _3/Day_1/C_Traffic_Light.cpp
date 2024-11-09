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
    int n,ans = -1, last = -1;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    s.append(s);

    for (int i = s.size()-1; i >= 0; i--)
    {
        if(s[i]=='g')last = i;
        if(s[i] == c) ans = max(ans,last-i);
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