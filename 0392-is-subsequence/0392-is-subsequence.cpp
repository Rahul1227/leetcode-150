class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1=s.size();
        if(n1==0) return true;
        int n2=t.size();
        if(n2==0) return false;
        int i=0;
        int j=0;
        while(i<n1 && j<n2){
            if(s[i]==t[j]){
                i++;

            }
                j++;
            if(i==n1) return true;
            
        }
        
        return false;
        
    }
};