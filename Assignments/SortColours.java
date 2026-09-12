class SortColours {
    public void sortColors(int[] nums) {
        int zero=0,one=0,two=0,i;
        for(i=0;i<nums.length;i++)
        {
            if(nums[i]==0)
            zero++;
            if(nums[i]==1)
            one++;
            if(nums[i]==2)
            two++;
        }
        for(i=0;i<zero;i++)
        nums[i]=0;
        for(i=0;i<one;i++)
        nums[i+zero]=1;
        for(i=0;i<two;i++)
        nums[i+one+zero]=2;
    }
}
