class Solution {
public:

    string encode(vector<string>& strs) {
        int n  = strs.size();

        string s = "";
        for(int i = 0; i<n; i++){
            int len = strs[i].length();
            
            s += to_string(len);
            s += '#';
            
            s += strs[i];
            
        }

        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;

        int n = s.length();

        int i = 0;
        while(i<n){
           int j = i;

           while(s[j] != '#'){
            j++;
           }

           int len = stoi(s.substr(i, j-i));

           string word = s.substr(j+1, len);

           ans.push_back(word);
           i = j + len + 1;
        }

        return ans;
        
    }
};
