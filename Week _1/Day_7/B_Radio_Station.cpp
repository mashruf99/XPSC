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

int main()
{
    fast();
    int n,k;
    cin >> n >> k;
    map<string, string> mp;
    for (int i = 0; i < n; i++)
    {
        string nam, ip;
        cin >> nam >> ip;
        mp[ip] = nam;
        
    }
    for (int i = 0; i < k; i++)
    {
        string nam, ip;
        cin >> nam >> ip;
        ip.pop_back();
        cout<< nam << " " << ip <<"; #"<<mp[ip]<<endl;

    }
    
    return 0;
}