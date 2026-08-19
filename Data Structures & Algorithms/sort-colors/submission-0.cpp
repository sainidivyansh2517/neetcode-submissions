class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;

        for(int x: nums){
            if(x == 0) cnt0++;
            else if(x == 1) cnt1++;
            else cnt2++;
        }

        int i = 0;
        while(i<n){
            if(cnt0 > 0){
                nums[i] = 0;
                cnt0--;
            }    
            else if(cnt1 > 0){
                nums[i] = 1;
                cnt1--;
            }
            else if(cnt2 > 0){
                nums[i] = 2;
                cnt2--;
            } 
            i++;
        }

        
    }
};