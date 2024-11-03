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
    cin>>n;
    string a, chk ="Timur";
    cin>>a;
    sort(a.begin(),a.end());
    sort(chk.begin(),chk.end());
    if(n!=5)no;
    else{
        if(a==chk)yes;
        else no;
    }

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