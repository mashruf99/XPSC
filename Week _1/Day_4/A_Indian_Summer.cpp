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
    int n,cnt=0,c=0;
    cin>>n;
    cin.ignore();
    set<string>a;
    for (int i = 0; i < n; i++)
    {
        string b;
        getline(cin,b);
        a.insert(b);
    }
    
    cout<<a.size()<<endl;

    return 0;
}