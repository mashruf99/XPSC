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
    int a,b;
    cin>>a>>b;

    if(a>b)cout<<0<<endl;
    else{
        cout<<(b-a)+1<<endl;
    }

    return 0;
}