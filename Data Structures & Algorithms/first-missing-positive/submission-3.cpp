class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;

        int mini = INT_MAX;
        for(int x: nums){
            st.insert(x);
            if(x>=0){
                mini = min(mini, x);
            }
            
        }
        if(mini>1) return 1;
        

        while(st.count(mini) > 0){
            mini++;
        }

        return mini;
    }
};