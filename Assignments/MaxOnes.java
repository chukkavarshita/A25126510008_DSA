class MaxOnes {
    public int findMaxConsecutiveOnes(int[] nums) {
        int count=0,i,max=0;
        for(i=0;i<nums.length;i++){
        if(nums[i]==1)
        count++;
        else
        count=0;
        if(count>max)
        max=count;
        }
        return max;
    }
}
