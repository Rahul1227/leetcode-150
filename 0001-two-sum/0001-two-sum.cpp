#include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int flag=0;
        int firstind=-1;
        int secondind=-1;
        map<int, int> mpp;
        for(int i=0; i<n; i++){
            int rem=target-nums[i];
            if(mpp.find(rem)!=mpp.end()){
                firstind=mpp[rem];
                secondind=i;
                flag=1;
                break;
            }
            mpp[nums[i]]=i;
        }
        return {firstind, secondind};


        
    }
};