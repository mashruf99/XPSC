#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int lenOfLongestSubarr(vector<int> &arr, int k)
    {
        unordered_map<long long, long long> mp;
        long long cur = 0, ans = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            cur += arr[i];
            if (cur == k)
                ans = i + 1;
            if (mp.find(cur - k) != mp.end())
                ans = max(ans, i - mp[cur - k]);
            if (mp.find(cur) == mp.end())
                mp[cur] = i;
        }

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--)
    {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value)
        {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}