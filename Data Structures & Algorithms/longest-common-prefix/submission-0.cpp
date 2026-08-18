class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[n-1];

        int minLen = min(first.length(), last.length());

        string s = "";
        for(int i = 0; i<minLen; i++){
            if(first[i] != last[i]){
                return s;
            }

            s += first[i];
        }

        return s;
    }
};