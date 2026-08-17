class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int x: nums){
            if(x == 0) cnt++;
        }

        vector<int> proArr(n);
        if(cnt == 0){
            int pro = 1;
            for(int i = 0; i<n; i++){
                pro = nums[i]*pro;
            }

            for(int i = 0; i<n; i++){
                proArr[i] = pro/nums[i];
            }
        }
        else if(cnt == 1){
            int pro = 1;
            for(int i = 0; i<n; i++){
                if(nums[i] == 0) continue;
                pro *= nums[i];
            }

            for(int i = 0; i<n; i++){
                if(nums[i] == 0) proArr[i] = pro;
                else{
                    proArr[i] = 0;
                }
            }
        }
        else{
            for(int i = 0; i<n; i++){
                proArr[i] = 0;
            }
        }

        return proArr;
    }
};
