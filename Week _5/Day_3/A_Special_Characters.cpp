//MASHRUF's work
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
 
 
void ok()
{
    int n;
    cin>>n;
    if(n%2==1)cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=0; i<n/2; i++){
            cout<<"CCD";
        }
        cout<<endl;
    }
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ok();
    }
    return 0;
}