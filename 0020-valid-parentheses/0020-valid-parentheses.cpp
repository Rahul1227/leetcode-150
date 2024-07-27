class Solution {
public:
    bool isbalanced(char &c, char &top){
        if(c==')'&& top=='(') return true;
        if(c=='}'&& top=='{') return true;
        if(c==']' && top=='[') return true;
        return false;
    }


    bool isValid(string s) {
        stack<char> st;
        int n=s.size();
        for(int i=0; i<n; i++){
            char c=s[i];
            if(c=='('||c=='{'||c=='['){
                st.push(c);
            }else{
                if(!st.empty()){
                    char stacktop=st.top();
                    st.pop();
                    if(isbalanced(c,stacktop)){
                        continue;
                    }else{
                        return false;
                    }

                }else{
                    //there is element in the string but the stack becomes empty
                    return false;
                }
            }
        }
        if(st.empty()) return true;
        return false;
        
    }
};