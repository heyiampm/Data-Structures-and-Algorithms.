class Solution:
    def aggressiveCows(self, stalls, k):
        stalls.sort()
        n = len(stalls)
        
        def can_place(min_dist):
            count = 1
            last_position = stalls[0]
            
            for i in range(1, n):
                if stalls[i] - last_position >= min_dist:
                    count += 1
                    last_position = stalls[i]
                    if count >= k:
                        return True
            return False
            
        low = 1
        high = stalls[-1] - stalls[0]
        ans = 0
        
        while low <= high:
            mid = (low + high) // 2
            if can_place(mid):
                ans = mid
                low = mid + 1
            else:
                high = mid - 1
                
        return ans