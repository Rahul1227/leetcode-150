class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0; i<strs[0].size(); i++){
            char ch=strs[0][i];
            int flag=1;
            for(int j=1; j<strs.size(); j++){
                if(ch!=strs[j][i]){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                ans+=ch;
            }else{
                break;
            }
        }
        return ans;
        
    }
};