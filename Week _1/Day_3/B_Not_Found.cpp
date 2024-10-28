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
    string s;
    cin>>s;
    bool ans = false;
    int n = s.size();
    int a[26] = {0};

    for (int i = 0; i < n; i++)
    {
        int ent = s[i]-'a';
        a[ent]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(a[i] == 0){
            char an = i+'a';
            cout<<an;
            ans = true;
            break;
        }
    }
    
    if(!ans)cout<<"None";

    return 0;
}