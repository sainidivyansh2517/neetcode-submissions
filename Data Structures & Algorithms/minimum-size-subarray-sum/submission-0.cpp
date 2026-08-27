class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();

        int minLen = INT_MAX;
        int sum = 0;
        
        int i = 0;
        int j = 0;
        while(j<n){
            sum += nums[j];

            while(j<n && sum >= target){
                sum -= nums[i];
                minLen = min(minLen, j-i+1);
                i++;
            }
            j++;
        }

        return minLen == INT_MAX? 0: minLen;
    }
};