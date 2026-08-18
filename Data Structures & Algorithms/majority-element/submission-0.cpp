class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        int cnt = 0;
        int ele = INT_MIN;

        int i = 0;
        while(i<n){

            if(cnt == 0){
                cnt++;
                ele = nums[i];
            }

            if(nums[i] == ele){
                cnt++;
            }
            else if(nums[i] != ele){
                cnt--;
            }
            i++;
        }

        cout<<ele<<endl;

        int cnt1 = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == ele) cnt1++;
        }

        if(cnt1 > n/2) return ele;
        return -1;
    }
};