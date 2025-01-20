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
    string a;
    cin>>a;
    int cnt1=0,cnt2=0;
    for(int i=0; i<a.size(); i++){
        if(a[i]=='0')cnt1++;
        else cnt2++;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i]=='0')cnt2--;
        else cnt1--;
        if(cnt1<0 || cnt2<0)break;
    }
    if(cnt1<0)cnt1=0;
    if(cnt2<0)cnt2=0;
    cout<<cnt1+cnt2<<'\n';
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