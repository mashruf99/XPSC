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
    string a;
    char c;
    int chk = -1;
    cin >> a;
    int n = a.size();
    if(a.front() == 'z')c = a.front()-1;
    else c = a.front()+1;
    for(int i = 0; i+1 < n; i++){
        if(a[i] == a[i + 1]){
            chk = i;
        }
    }
	if(chk == -1)cout<<c<<a<<endl;
    else{
        c = 'a';
        if(a[chk] == 'a')c = 'b';
        cout<<a.substr(0,chk+1)+c+a.substr(chk+1,n)<<endl;
    }
    

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