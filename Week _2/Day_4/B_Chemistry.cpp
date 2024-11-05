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
    int n,k,i;
    cin>>n>>k;
    string a;
    cin>>a;
 
    int b[26]={0};
 
    for(i=0; i<n; i++){
        b[a[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(b[i]%2==1){
            k--;
        }
    }
    if(k<-1)cout<<"NO"<<endl;
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