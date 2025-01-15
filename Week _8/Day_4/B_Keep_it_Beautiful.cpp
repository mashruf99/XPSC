//MASHRUF's work

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair


void ok()
{

    ll n,b,d=0,x=0,f=0;
    cin>>n;
    ll a[n+2];
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i];


        if(a[i]>=d  &&  f==0)
        {
            cout<<1;
            d=max(d,a[i]);
        }
        else if(a[i]>=x  &&  a[i]<=a[1])
        {
            f=1;
            cout<<1;
            x=max(x,a[i]);
        }
        else
        {
            cout<<0;
        }

    }
    cout<<endl;


}




int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ok();
    }
    return 0;
}
