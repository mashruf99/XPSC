// MASHRUF's work

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define mp make_pair
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define endl '\n'
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void ok()
{
    int n;
    cin >> n;
    vector<int> a(n);
    ll ans1 = 0, ans2 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans1 += abs(a[i]);
    }
    ll l = 0, r = 0;
    bool chk = false;
    
    for (int i = 0; i < n; i++)
    {
        if(a[i] <= 0){
            if(!chk && a[i]!=0){
                ans2++;
                chk = true;
            } 
        } 
        else chk = false;
    }
    cout<< ans1 <<" "<< ans2 << endl;
    
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