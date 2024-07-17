class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        typedef pair<int, pair<int, int>> P;
        priority_queue<P> pq;
        int n1=nums1.size();
        int n2=nums2.size();

        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                int sum=nums1[i]+nums2[j];

                if(pq.size()<k){
                    pq.push({sum,{i,j}});
                }else if(sum<pq.top().first){
                    pq.pop();
                    pq.push({sum,{i,j}});
                }else{
                    break;
                }
            }
        }

        vector<vector<int>> ans;
        while(!pq.empty()){
            auto top=pq.top();
            pq.pop();
            int i=top.second.first;
            int j=top.second.second;
            ans.push_back({nums1[i], nums2[j]});
        }

        return ans;
        
    }
};