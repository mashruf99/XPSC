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

int a[201][201];
ll chk(int x,int y, int n, int m){
    ll ans = 0;
    int indx = 0;
    while ((x-indx)>-1 && (y-indx)>-1)
    {
        ans+=a[x-indx][y-indx];
        indx++;
    }
    indx = 0;
    while ((x-indx)>-1 && (y+indx)<m)
    {
        ans+=a[x-indx][y+indx];
        indx++;
    }
    indx = 0;
    while ((x+indx)<n && (y+indx)<m)
    {
        ans+=a[x+indx][y+indx];
        indx++;
    }
    indx = 0;
    while ((x+indx)<n && (y-indx)>-1)
    {
        ans+=a[x+indx][y-indx];
        indx++;
    }

    return ans - 3*(a[x][y]);

}
void ok()
{
    int n,m;
    cin >> n >> m;
    

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++){
            ans = max(ans,chk(i,j,n,m));
        }
    }
    cout<<ans<<endl;
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