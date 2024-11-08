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
    cout<<2<<endl;
    int a=n,b=n-1;
    for(int i=1;i<n;i++)
    {
        cout<<a<<" "<<b<<endl;
        a=(a+b+1)/2;
        b--;
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