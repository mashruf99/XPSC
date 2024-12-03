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
    string a,b,c;
    cin>>a>>b>>c;
    bool ans = true;
    for(int i=0; i<n; i++){
        if(a[i]!=c[i]){
            if(b[i]!=c[i])ans =false;
        }
        if(b[i]!=c[i]){
            if(a[i]!=c[i])ans =false;
        }
    }
    if(ans)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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