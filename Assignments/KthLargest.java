class KthLargest {

    public int findKthLargest(int[] nums, int k) {

        int target = nums.length - k;
        int first = 0;
        int last = nums.length - 1;

        while (first <= last) {

            int i = first;
            int j = last;
            int pivot = nums[first];

            while (i <= j) {

                while (nums[i] < pivot)
                    i++;

                while (nums[j] > pivot)
                    j--;

                if (i <= j) {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;

                    i++;
                    j--;
                }
            }

            if (target <= j)
                last = j;
            else if (target >= i)
                first = i;
            else
                return nums[target];
        }

        return -1;
    }
}
