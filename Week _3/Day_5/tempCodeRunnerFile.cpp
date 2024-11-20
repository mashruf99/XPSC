class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
       
        int n = arr.size();
         if (k > n) {
        return -1;
    }

    int maxSum = 0;
    int currentSum = 0;
    for (int i = 0; i < k; ++i) {
        currentSum += arr[i];
    }

    maxSum = currentSum;
    for (int i = k; i < n; ++i) {
        currentSum -= arr[i - k];
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends