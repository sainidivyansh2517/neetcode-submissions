class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();

        int newSize = 2*n;
        vector<int> arr(newSize, 0);

        for(int i = 0; i<n; i++){
            arr[i]  = nums[i];
            arr[n+i] = nums[i];
        }

        return arr;
    }
};