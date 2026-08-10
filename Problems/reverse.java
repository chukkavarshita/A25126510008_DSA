class Solution {
    public int reverse(int x) {
        int r;
        long sum=0;
        if(x<0)
        {
            x=x*-1;
            while(x>0)
            {
                r=x%10;
                sum=sum*10+r;
                x=x/10;
            }
            sum=sum*-1;
        }
        else
        {
            while(x>0)
            {
                r=x%10;
                sum=sum*10+r;
                x=x/10;
            }            
        }
        if(sum>2147483647||sum<-2147483648L)
        {
        return 0;
        }
        return (int)sum;
    }
}
