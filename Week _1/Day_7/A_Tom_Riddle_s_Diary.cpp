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
    int t;
    cin >> t;
    vector<string> a(t);
    unordered_set<string>mp;
    for (int i = 0; i < t; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < t; ++i) {
        if (mp.find(a[i]) == mp.end()) {
           no;
           mp.insert(a[i]);
        }
        else yes;
    }

    return 0;
}