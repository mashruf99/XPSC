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
    cin >> n;
    string s;
    cin >> s;
    set<char> a;
    for (int i = 0; i < n; i++)
    {
        a.insert(s[i]);
    }
   

    auto rev = a.rbegin();
    map<char,char>mp;

    for(auto it: a){
        mp[it]= *rev;
        rev++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<mp[s[i]];

    }
    cout<<endl;
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