class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n  = s1.length();
        int m = s2.length();

        if(m<n) return false;

        string str = s1;
        sort(str.begin(), str.end());

        int i = 0;
        int j = n-1;
        while(j<m){
            
            string s = s2.substr(i, j-i+1);
            sort(s.begin(), s.end());

            if(s == str) return true;
            j++;
            i++;
        }

        return false;
    }
};
