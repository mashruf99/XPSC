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
    int n,k;
    cin>>n>>k;

    if(k==0){
        for(int i=n ; i>=1; i--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else if(k==(n-1)){
        for(int i=1; i<=n; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=1; i<=k; i++){
                cout<<i<<" ";
        }
        for(int i=n; i>k; i--){
             cout<<i<<" ";
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