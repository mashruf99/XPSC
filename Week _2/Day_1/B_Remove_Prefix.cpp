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
    int a = 0;
    set<int>b;
    vector<int>c(n);
    
    
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    if(n==1)cout<<0<<endl;
    else{
    for(int i=n-1; i>=0; i--){
        b.insert(c[i]);
        a+=1;
        if(a > b.size())break;
    }
    cout<< n - b.size()<<endl;
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