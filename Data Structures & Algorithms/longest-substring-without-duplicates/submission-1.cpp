class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_set<char> st;

        int maxLen = 0;
        int i = 0;
        int j = 0;
        while(j<n){

            while(st.find(s[j]) != st.end()){
                st.erase(s[i]);
                i++;
            }

            int currLen = j-i+1;

            maxLen = max(maxLen, currLen);
            st.insert(s[j]);
            j++;
        }

        return maxLen;
    }
};
