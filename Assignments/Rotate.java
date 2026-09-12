class Rotate {
    public void rotate(int[] nums, int k) {
        k = k % nums.length;
        int[] a = new int[k];
        for (int i = 0; i < k; i++) 
        {
            a[i] = nums[nums.length - k + i];
        }
        for (int i = nums.length - k - 1; i >= 0; i--) 
        {
            nums[i + k] = nums[i];
        }
        for (int i = 0; i < k; i++) 
        {
            nums[i] = a[i];
        }
    }
}
