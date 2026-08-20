class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> mpp;\
        mpp[0] = 1;
        int cnt = 0;

        int i = 0;
        long long sum = 0;
        while(i<n){

            sum += nums[i];
            int rem = sum-k;
            cnt += mpp[rem];
            mpp[sum]++;
            i++;
        }

        return cnt;
    }
};