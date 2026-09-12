class SolutionRI {
    int Roman(char a)
    {
        if(a=='I')
        return 1;
        else if(a=='V')
        return 5;
        else if(a=='X')
        return 10;
        else if(a=='L')
        return 50;
        else if(a=='C')
        return 100;
        else if(a=='D')
        return 500;
        else
        return 1000;

    }
    public int romanToInt(String s) {
        char[] s1=s.toCharArray();
        int sum=0;
        for(int i=0;i<s1.length;i++)
        {
           int x=Roman(s1[i]);
           if(i+1<s1.length && x<Roman(s1[i+1]))
           sum-=x;
           else
           sum+=x;
        }
        return sum;
    }
}
