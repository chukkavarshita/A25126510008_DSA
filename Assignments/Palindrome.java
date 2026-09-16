class Palindrome {
    public boolean isPalindrome(int n) {
        int r,n1,sum=0;
        n1=n;
        if(n<0)
        {
            return false;
        }
        else
        {
        while(n>0)
        {
            r=n%10;
            sum=sum*10+r;
            n=n/10;
        }
        if(n1==sum)
        return true;
        else
        return false;
        }

    }
}
