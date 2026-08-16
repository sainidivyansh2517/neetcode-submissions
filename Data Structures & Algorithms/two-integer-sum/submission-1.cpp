class Solution {
public:

    bool static comp(const vector<int> &a, const vector<int> &b){
        return a[0] < b[0];
    }

    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        vector<vector<int>> arr;
        for(int i = 0; i<n; i++){
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end(), comp);

        vector<int> temp;

        int i = 0;
        int j = n-1;
        while(i<=j){
            if((arr[i][0] + arr[j][0]) == target){
                temp.push_back(arr[i][1]);
                temp.push_back(arr[j][1]);
                sort(temp.begin(), temp.end());

                return temp;
            }

            else if((arr[i][0] + arr[j][0])>target){
                j--;
            }
            else{
                i++;
            }

        }

        return {-1,-1};


    }
};
