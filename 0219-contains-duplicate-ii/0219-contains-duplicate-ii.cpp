class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> mpp;
        int n=nums.size();
        for(int i=0; i<n; i++){
            int num=nums[i];
            if(mpp.find(num)!=mpp.end()){
                int ind=mpp[num];
                if(abs(i-ind)<=k){
                    return true;
                }
            }
            mpp[nums[i]]=i;
        }
        return false;
        
    }
};