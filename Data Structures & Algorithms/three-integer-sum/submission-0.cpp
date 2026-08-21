class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> ans;

        for(int i = 0; i<n; i++){
            set<int> hash;
            for(int j = i+1; j<n; j++){
                int third = -(nums[i]+nums[j]);

                if(hash.find(third) != hash.end()){

                    vector<int> temp = {nums[i], nums[j], third};

                    sort(temp.begin(), temp.end());
                    ans.insert(temp);
                }
                hash.insert(nums[j]);
            }

        }

        vector<vector<int>> res;
        for(auto it: ans){
            res.push_back(it);
        }

        return res;
    }
};
