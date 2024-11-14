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
    int t;
    cin >> t;
    string s;
    stack<string> a;
    set<string> ss;

    while (t--)
    {
        cin >> s;
        a.push(s);
    }
    while (!a.empty())
    {
        if(ss.find(a.top()) == ss.end()){
            ss.insert(a.top());
            string chk =a.top();
            if(chk.size()>2)cout<<chk.substr(chk.size()-2);
        }
        a.pop();
    }

    return 0;
}