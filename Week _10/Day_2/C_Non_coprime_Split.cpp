//MASHRUF's work
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int prime(ll n)
{
    while (n % 2 == 0)
    {
        return 2;
        n = n/2;
    }
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            return i;
            n = n/i;
        }
    }
    if (n > 2)
        return n;
}


void ok()
{
    ll a,b,k;
    cin>>a>>b;
    if(b<=3)
    {
        cout<<-1<<'\n';
    }

    else
    {
        if(b%2 == 0)
        {
            cout<<2<<" "<<b-2<<'\n';
        }
        else if (a==b){
            k = prime(b);
            if(k == b)
            {
                cout<<-1<<'\n';
            }
            else
            {
                cout<<k<<" "<<b-k<<'\n';
            }
        }

        else
        {
            b--;
            cout<<2<<" "<<b-2<<'\n';
        }
    }

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