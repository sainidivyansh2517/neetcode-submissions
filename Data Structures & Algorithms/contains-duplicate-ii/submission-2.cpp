class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // Sliding Window approach

        int n = nums.size();
        unordered_set<int> st;
        
        int l = 0;
        int r = 0;
        while(r<n){
            if(st.size()>k){
                st.erase(nums[l]);
                l++;
            }

            if(st.find(nums[r]) != st.end()){
                return true;
            }

            st.insert(nums[r]);
            r++;

        }

        return false;
        
    }
};