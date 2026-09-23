class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        HashMap<Integer, Integer> mpp = new HashMap<>();

        int i = 0;
        int[] arr = new int[2];
        while(i<nums.length){
            int left = target - nums[i];

            if(mpp.containsKey(left)){
                arr[0] = mpp.get(left);
                arr[1] = i;
                break;
            }

            mpp.put(nums[i], i);
            i++;
        }

        return arr;
    }
}
