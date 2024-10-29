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
    int n,f=0,l=0;
    cin>>n;
    for(int i=0; i<n; i++){
            char a;
            cin>>a;
        if(f==0 && a=='B'){
            f=i+1;
            l=i+1;
        }
        else if(f!=0 && a=='B'){
            l=i+1;
        }
    }
 
    cout<<(l-f)+1<<endl;
 
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