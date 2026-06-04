class Solution {
public:
    bool isPossible(vector<int>& arr, int n, int k, long long maxTime) {
        int painters = 1;
        long long currentSum = 0;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] > maxTime) return false;
            
            if (currentSum + arr[i] <= maxTime) {
                currentSum += arr[i];
            } else {
                painters++;
                currentSum = arr[i];
                if (painters > k) return false;
            }
        }
        return true;
    }

    long long minTime(vector<int>& arr, int k) {
        int n = arr.size(); 
        long long low = 0;
        long long high = 0;
        
        for (int i = 0; i < n; i++) {
            low = max(low, (long long)arr[i]);
            high += arr[i];
        }
        
        long long ans = high;
        
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            
            if (isPossible(arr, n, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};