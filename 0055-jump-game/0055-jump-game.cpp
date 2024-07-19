class Solution {
public:
    bool canJump(vector<int>& nums) {
        //int currIndex=-1;
        int maxIndex=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(i<=maxIndex)
                maxIndex=max(maxIndex,i+nums[i]);
            else 
                return false;
        }
        return true;
        
    }
};