class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> leftarray(n);
        leftarray[0]=1;
        vector<int> rightarray(n);
        rightarray[n-1]=1;
        for(int i=0; i<n-1; i++){
            leftarray[i+1]=leftarray[i]*nums[i];
        }

        for(int i=n-1; i>0; i--){
            rightarray[i-1]=rightarray[i]*nums[i];
        }

        vector<int> ans(n);
        for(int i=0; i<n; i++){
            ans[i]=leftarray[i]*rightarray[i];
        }

        return ans;

        
    }
};