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
    int s,i,j,size;
    cin >> s;
        string a;
        cin >> a;
        i=0,j=s-1,size=s;
        while (a[i] != a[j] && size > 0){
            i++;
            j--;
            size-=2;
        }
 
      cout<<size<<endl;

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