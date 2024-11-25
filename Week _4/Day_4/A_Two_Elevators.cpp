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
    int a,b,c;
    cin >> a >> b >> c;
    int ans = abs(b-c)+(c-1);
    int ans2 =a-1;
    if(ans == ans2)cout<< 3 <<endl;
    else if (ans > ans2)
    {
        cout<< 1 <<endl;
    }
    else cout<< 2 <<endl;
    
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