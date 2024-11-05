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
    int n , cnt=0,day=1;
    cin >> n;
    
    multiset<int>a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }

    while (!a.empty())
    {
        auto l = a.lower_bound(day);
        if(l != a.end()){
            cnt++;
            a.erase(l);
        }
        else{
            break;
        }
        day+=1;
    }
 
    cout<<cnt<<endl;

    return 0;
}