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
    unordered_map<string, int> stringCount;
    string input;

    while (cin >> input) { // You can change this to your desired input method
        if (stringCount.find(input) == stringCount.end()) {
            stringCount[input] = 1;
            cout << "OK" << endl;
        } else {
            ++stringCount[input];
            cout << input << stringCount[input] - 1 << endl;
        }
    }
    
    

    return 0;
}