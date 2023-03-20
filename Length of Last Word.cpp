class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int k=s.size()-1;
        while(s[k]==' '){
            k=k-1;
        }
        for(int i=k;i>=0;i--){
            if(s[i]==' ')
             break;
            if(s[i]!=' '){
                count++;
             }
             
        }

        
      return count;  
    }
};
