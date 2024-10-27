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
    int a,b,c,cnt = 0;
    cin >> a>>b >>c;
    float chk =c + 0.5;
    int m = a;
    
    while (m <= chk) {
        cnt++;
        m += a;
    }

    cout <<(b*cnt) << endl;

    return 0;
}