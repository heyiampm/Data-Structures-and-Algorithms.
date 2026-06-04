#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPossible(vector<int>& arr, int n, int m, long long maxPages) {
        int studentCount = 1;
        long long currentPagesSum = 0;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] > maxPages) return false;
            
            if (currentPagesSum + arr[i] <= maxPages) {
                currentPagesSum += arr[i];
            } else {
                studentCount++;
                currentPagesSum = arr[i];
                if (studentCount > m) return false;
            }
        }
        return true;
    }

    int findPages(vector<int>& arr, int k) {
        int n = arr.size();
        if (k > n) return -1; 
        
        long long low = 0;
        long long high = 0;
        
        for (int i = 0; i < n; i++) {
            low = max(low, (long long)arr[i]);
            high += arr[i];
        }
        
        long long ans = -1;
        
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