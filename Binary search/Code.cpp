#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int start = 0, end = arr.size() - 1;

    while (start <= end) {
        int mid = (start + end) >> 1; 
        

        if (target > arr[mid]) {
            start = mid + 1;
        }
        
        else if (target < arr[mid]) {
            end = mid - 1;
        }
        
        else {
            return mid;
        }
    }
    return -1; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12,58};
    int target1 = 8;

    cout << binarySearch(arr1, target1) << "\n"; 

    return 0;
}