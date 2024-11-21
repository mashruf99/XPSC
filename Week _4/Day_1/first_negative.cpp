  int n = arr.size();
        vector<int> result;
        queue<int> q; // Stores indices of negative numbers

        int left = 0, right = 0;

        while (right < n) {
            // Add the current element if it is negative
            if (arr[right] < 0) {
                q.push(right);
            }

            // Check if window size matches
            if (right - left + 1 == k) {
                // Add the first negative integer or 0 if queue is empty
                if (!q.empty()) {
                    result.push_back(arr[q.front()]);
                    // Remove elements outside the window
                    if (q.front() == left) {
                        q.pop();
                    }
                } else {
                    result.push_back(0);
                }

                // Slide the window forward
                left++;
            }

            // Expand the window
            right++;
        }

        return result;