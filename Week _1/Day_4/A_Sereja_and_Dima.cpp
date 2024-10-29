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
    int n;
    bool t = true;
    cin>>n;
    vector<int>a(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int l=0,r=n-1;
    int a1=0,a2=0;

    
    while (l<=r)
    {
        if(t){
            if(a[l]>a[r]){
                a1+=a[l];
                l++;
                t= false;
            }
            else{
                a1+=a[r];
                r--;
                t=false;
            }
        }
        else{
             if(a[l]>a[r]){
                a2+=a[l];
                l++;
                t= true;
            }
            else{
                a2+=a[r];
                r--;
                t=true;
            }
        }
        
    }
    
    cout<<a1<<" "<<a2;

    return 0;
}