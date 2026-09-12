class Solution {
    void quickSort(int a[],int first,int last)
    {
        if(first<last)
        {
        int pivot=first;
        int i=first;
        int j=last;
        while(i<j)
        {
            while(a[pivot]>=a[i] && i<last)
            i++;
            while(a[j]>a[pivot])
            j--;
            if(i<j)
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        int temp=a[pivot];a[pivot]=a[j];a[j]=temp;
        quickSort(a,first,j-1);
        quickSort(a,j+1,last);
        }
    }
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int i,x;
        double median;
        int[] a=new int[nums1.length+nums2.length];
        for(i=0;i<nums1.length;i++)
        {
            a[i]=nums1[i];
        }
        for(i=nums1.length;i<nums1.length+nums2.length;i++)
        {
            a[i]=nums2[i-nums1.length];
        }
        quickSort(a,0,a.length-1);
        x=nums1.length+nums2.length;
        if(x%2!=0)
        {
           x=x/2;
           median=a[x];
        }
        else
        {
            median=(a[x/2-1]+a[x/2])/2.0;
        }
        return median;
    }
}
