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
    int n,m;
    cin >> n >> m;
    vector<int>a(n);
    vector<int>b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    
    for (int i = 0; i < m; ++i) {
        int left = 0, right = n-1, mid;
        while (left <= right) {
            mid = left+(right-left) / 2;
            if (a[mid] < b[i]) {
                left = mid+1;
            } else {
                right = mid-1;
            }
        }
        cout << left << " ";
    }
    cout << endl;
        
    

    return 0;
}