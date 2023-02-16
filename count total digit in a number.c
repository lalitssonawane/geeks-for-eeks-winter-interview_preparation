class Solution
{
    public static int countDigits(int n)
    {
        if(n<10)
            return 1;
        else
            // recursively count the digits of n
            return 1+countDigits(n/10);
    }
}