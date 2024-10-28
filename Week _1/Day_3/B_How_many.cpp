// MAsHRUF's work

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define mp make_pair
#define no cout << "NO" << '\n'
#define yes cout << "YEs" << '\n'
#define endl '\n'
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main()
{
    fast();

    int s,t,cnt=0;
    cin >> s >> t;
    for (int a = 0; a <= s; ++a) {
        for (int b = 0; b <= s - a; ++b) {
            for (int c = 0; c <= s - a - b; ++c) {
                if (a * b * c <= t) {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}