class SingleNonDuplicate {
    public int singleNonDuplicate(int[] nums) {
        int i;
        for(i = 0; i < nums.length - 1; i = i + 2) 
        {
            if(nums[i] != nums[i + 1])
                return nums[i];
        }
        return nums[nums.length - 1];
    }
}
