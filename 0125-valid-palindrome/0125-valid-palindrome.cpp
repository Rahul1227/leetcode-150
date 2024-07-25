class Solution {
public:

    bool isvalid(char c){
        if((c>='a' && c<='z')||( c>='A' && c<='Z')|| (c>='0' && c<='9')) return true;
        return false;
    }


    bool isPalindrome(string s) {
        
        int n=s.size();
        int i=0;
        int j=n-1;
        int flag=1;
        while(i<=j){
            if(isvalid(s[i])&& isvalid(s[j])){
                char a=s[i]|' ';
                char b=s[j]|' ';
                if(a==b){
                    i++;
                    j--;
                }else return false;
                    
                    
                

            }else if(!isvalid(s[i])) i++;
             else if  (!isvalid(s[j])) j--;
        }
        
        return true;
        
    }
};