class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> mpp;
        for(int x: nums){
            mpp[x]++;
        }

        vector<int> ans;
        for(auto it: mpp){
            if(it.second > n/3) ans.push_back(it.first);
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};