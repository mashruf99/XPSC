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
    string a,b;
    cin>>a>>b;
    int n = a.size(),cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=b[i])cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}