class Solution {
public:
    int reverse( int x) {
        long sum=0;
         int a ;
          
        while(x!=0){
           a=x%10;
            sum=(sum*10)+a;
            x=x/10;
           }
         if(sum>INT_MAX || sum<INT_MIN) return 0;
       
        return (sum);
    }
};
