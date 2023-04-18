class Solution {
public:
    bool isPerfectSquare(int num) {
       long int sum=0;
        for(long int i=1;i<=num;i++){
                sum=i*i;
                if(sum==num){
                    return true;
                }
                if(sum>num){
                    break;
                }
        }
     return false;   
    }
};
