class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String, List<String>> mpp = new HashMap<>();

        for(String s : strs){

            char[] arr = s.toCharArray();
            Arrays.sort(arr);
            String st = new String(arr);

            mpp.putIfAbsent(st, new ArrayList<>());
            mpp.get(st).add(s);
        }

        List<List<String>> ans = new ArrayList<>();
        for(List<String> nums : mpp.values()){
            ans.add(nums);
        }

        return ans;
    }
}
