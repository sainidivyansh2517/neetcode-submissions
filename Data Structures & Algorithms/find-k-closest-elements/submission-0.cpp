class Solution {
public:

    bool static comp(const pair<int, int> &a, const pair<int, int> &b){

        if(a.second == b.second){
            return a.first<b.first;
        }

        return a.second < b.second;
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();

        vector<pair<int, int>> nums;
        for(int it: arr){
            nums.push_back({it, abs((long long)x-it)});
        }

        sort(nums.begin(), nums.end(), comp);

        vector<int> ans;
        for(int i = 0; i<k; i++){
            ans.push_back(nums[i].first);
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};