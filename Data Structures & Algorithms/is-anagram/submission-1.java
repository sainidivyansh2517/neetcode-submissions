class Solution {
    public boolean isAnagram(String s, String t) {
        HashMap<Character, Integer> mpp = new HashMap<>();

        for(int i = 0; i<s.length(); i++){
            char ch = s.charAt(i);
            mpp.put(ch, mpp.getOrDefault(ch,0)+1);
        }

        for(int i = 0; i<t.length(); i++){

            char ch = t.charAt(i);
            mpp.put(ch, mpp.getOrDefault(ch,0)-1);
        }

        for(Integer value : mpp.values()){
            if(value != 0) return false;
        }

        return true;
    }
}

