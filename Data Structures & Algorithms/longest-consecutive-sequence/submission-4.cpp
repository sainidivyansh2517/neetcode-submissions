class Solution {

    bool isFound(vector<int> &nums, int x){
        int l = 0;
        int r = nums.size()-1;
        

        while(l<=r){
            int mid = l + (r-l)/2;

            if(nums[mid] == x){
                return true;
            }

            if(nums[mid]<x){
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        return false;
    }
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;

        sort(nums.begin(), nums.end());
        int maxCnt = 0;
        unordered_set<int> hash;

        for(int i = 0; i<n; i++){
            hash.insert(nums[i]);

            if(hash.count(nums[i]-1) != 0) continue;
            
            int cnt = 1;
            int x = nums[i]+1;

            while(isFound(nums,x++)){
                cnt++;
                
            }

            maxCnt = max(maxCnt, cnt);
        }

        return maxCnt;
    }
};
