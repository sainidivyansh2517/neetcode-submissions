class Solution {
public:

    static bool comp(const pair<int, int>& a, const pair<int, int>& b) {
        return a.first > b.first;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<int> hash(2001, 0);

        for(int x : nums) {
            hash[x + 1000]++;
        }

        vector<pair<int, int>> arr;

        for(int i = 0; i < hash.size(); i++) {
            if(hash[i] > 0) {
                arr.push_back({hash[i], i - 1000});
            }
        }

        sort(arr.begin(), arr.end(), comp);

        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(arr[i].second);
        }

        return ans;
    }
};