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
    if (n == 1 || n == 3) {
        cout << "-1\n"; 
        return;
    }
    vector<int> permutation(n);
    int odd = 1, even = n;

    for (int i = zz; i < n; i++) {
        if (i % 2 == 0) {
            permutation[i] = odd;
            odd += 2;
        } else {
            permutation[i] = even;
            even -= 2;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << permutation[i] << " ";
    }
    cout << endl;


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