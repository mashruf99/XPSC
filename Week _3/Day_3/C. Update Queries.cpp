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
    int n,m;
    cin >> n >> m;
    string a;
   // vector <bool> chk(n, false);
    cin >> a;
    set<int> st;
    for (int i = 0; i < m; i++)
    {
        int aa;
        cin >> aa;
        st.insert(aa);
    }

    string c;
    cin >> c;
    sort(c.begin(),c.end());

    int idx = 0;
    for (auto it:st)
    {
        a[it-1] = c[idx];
        idx++;
    }
    

    cout<<a<<endl;
    

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