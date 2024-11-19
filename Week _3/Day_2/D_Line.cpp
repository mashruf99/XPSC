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
	cin>>n;
    int s[n];
	string a;
	cin>>a;
	for(int i=0;i<n;i++)s[i]=0;
	ll sum=0;
	for(int i=0;i<n;i++){
		int l=i;
		int r=n-i-1;
		if(a[i]=='L'){
			sum+=l;
			if(r>l)s[i]=r-l;
			else s[i]=0;
			
		}
		else{
			sum+=r;
			if(l>r)s[i]=l-r;
			else s[i]=0;
		}
	}
	sort(s,s+n);
	for(int i=n-1;i>=0;i--){
		sum+=s[i];
		cout<<sum<<" ";
	}
	cout<<endl;

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