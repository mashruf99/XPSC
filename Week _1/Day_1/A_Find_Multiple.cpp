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
    int a,b,c;
    cin>>a>>b>>c;
    int m = 1;
    int n = c*1;
    int ans = -1;

    while (1)
    {
         int n = c * m;
        if (n >= a && n <= b) {
            ans = n;
            break;
        }
        if (n > b) {
            break;
        }
        m++;
    }
    cout<<ans;

    return 0;
}