class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> hashmap(26,0);
        int n1=ransomNote.size();
        int n2=magazine.size();

        for(int i=0; i<n2; i++){
            hashmap[magazine[i]-'a']++;
        }
        for(int i=0; i<n1; i++){
            hashmap[ransomNote[i]-'a']--;
        }     

         

        for(int i=0; i<26; i++){
            if(hashmap[i]<0) return false;
        } 

        return true;
        
    }
};