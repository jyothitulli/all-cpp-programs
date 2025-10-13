class Solution {
    public int reverse(int x) {
        boolean isneg= x<0;
        int num = Math.abs(x);
        int l=0;
        int res=0;
        while(num>0) {
            res*=10;
            if(res%10!=0)
                return 0;

            res+=num%10;
            num=num/10;
        }
        // System.out.println(num+" "+res);

        // if(res<0) {
        //     return 0;
        // }

        if(isneg)
            return 0-res;
        return res; 
    }
}