class Solution {
public:
    string reverseVowels(string s) {
       int e=0;
       string r="";
       for(int i=0;i<s.size();i++){
           if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
                r+=s[i];
               s[i]='=';
              
           }
       }
       reverse(r.begin(),r.end());
       for(int j=0;j<s.size();j++){
           if(s[j]=='='){
               s[j]=r[e];
               e++;
           }
       }
     return {s}  ; 
    }
};
