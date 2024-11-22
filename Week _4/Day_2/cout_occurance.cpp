//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	int search(string pat, string txt) {
	    int n = pat.size();
	    int m = txt.size();
	    int l = 0,r = n-1;
	    
	    vector<int> patFreq(26, 0), windowFreq(26, 0);
        int count = 0;
        for (char c : pat) {
            patFreq[c - 'a']++;
        }

        for (int i = 0; i < n; i++) {
            windowFreq[txt[i] - 'a']++;
        }
        if (patFreq == windowFreq) count++;

        for (int i = n; i < m; i++) {
            windowFreq[txt[i] - 'a']++;
            windowFreq[txt[i - n] - 'a']--;
            if (patFreq == windowFreq) count++;
        }

        return count;
	}

};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver 