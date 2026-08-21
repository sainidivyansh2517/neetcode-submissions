class Solution {

private:
    void reverseArr(vector<int> &nums, int l, int r){

        while(l<=r){
            int temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;

            l++;
            r--;
        }
    }

public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        k = k%n;

        reverseArr(nums, 0, n-1-k);
        reverseArr(nums, n-k, n-1);
        reverseArr(nums, 0, n-1);
    }
};