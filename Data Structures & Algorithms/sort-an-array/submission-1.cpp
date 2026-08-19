class Solution {

private:

    void merge(vector<int> &nums, int low, int mid, int high){
        vector<int> temp;
        int start = low;
        int end = mid+1;

        while(start<=mid && end <= high){
            if(nums[start] <= nums[end]){
                temp.push_back(nums[start]);
                start++;
            }else{
                temp.push_back(nums[end]);
                end++;
            }
        }

        while(start <= mid){
            temp.push_back(nums[start]);
            start++;
        }
        while(end <= high){
            temp.push_back(nums[end]);
            end++;
        }

        for(int i = low; i<=high; i++){
            nums[i] = temp[i-low];
        }
    }

    void mergeSort(vector<int> &nums, int low, int high){
        if(low>= high){
            return;
        }

        int mid = low + (high-low)/2;

        mergeSort(nums, low, mid);
        mergeSort(nums, mid+1, high);
        merge(nums, low, mid, high);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();

        mergeSort(nums, 0, n-1);

        return nums;
    }
};