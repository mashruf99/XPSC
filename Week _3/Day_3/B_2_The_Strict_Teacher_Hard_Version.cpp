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
    int n,m,q;
    cin >> n >> m >> q;
    vector<int>teachers(m);
    for (int i = 0; i < m; i++) cin >> teachers[i];

    sort(teachers.begin(),teachers.end());

    while (q--)
    {
        int david;
        cin >> david;

        if(david < teachers[0]){
            cout << teachers[0]-1 << endl;
            continue;
        }
        if(david > teachers[m-1]){
            cout << n - teachers[m-1] << endl;
            continue;
        }
        else{
            auto it = lower_bound(teachers.begin(),teachers.end(),david);
            auto jt = it;
            jt-=1;

            int left= *jt, right= *it , mid;
            mid = (right+left)/2;
            cout << min(abs(mid-left),abs(mid-right)) << endl;

        }
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