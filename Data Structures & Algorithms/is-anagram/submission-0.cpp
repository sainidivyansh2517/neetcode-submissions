class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();

        if(n != m) return false;

        vector<int> hash(26,0);

        for(auto x: s){
            hash[x-'a']++;
        }

        for(auto x: t){
            hash[x-'a']--;
        }

        for(int i = 0; i<hash.size(); i++){
            if(hash[i] != 0) return false;
        }

        return true;
    }
};
