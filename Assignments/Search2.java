class Search2 {
    public boolean search(int[] nums, int target) {
        boolean exist=false;
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]==target)
            {
                exist=true;
                break;
            }
        }
        return exist;
    }
}
