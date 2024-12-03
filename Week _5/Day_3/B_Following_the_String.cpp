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
    int a[n];
 
    string s = "qwertyuiopasdfghjklzxcvbnm";
    map<char,int>m;
    for(int i = 0; i<26; i++){
        m[s[i]]=0;
    }
 
    for(int i=0; i<n; i++){
        cin>>a[i];
        for(int j=0; j<26; j++){
            if(a[i]==m[j]){
                cout<<s[j];
                m[j]++;
                break;
            }
        }
    }
    cout<<endl;
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