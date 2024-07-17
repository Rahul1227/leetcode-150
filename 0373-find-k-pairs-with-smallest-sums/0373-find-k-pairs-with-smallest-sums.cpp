class Solution {
public:
    typedef pair<int, pair<int, int>> P;
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n1=nums1.size();
        int n2=nums2.size();
        // declaring min heap
        priority_queue<P, vector<P>, greater<P>> pq;
        // set to check if already visited or not
        set<pair<int, int>>visited;
        pq.push({nums1[0]+nums2[0],{0,0}});
        visited.insert({0,0});

        // vector to store the ans
        vector<vector<int>> ans;

        while(k-- && !pq.empty()){
            auto top=pq.top();
            pq.pop();
            int i=top.second.first;
            int j=top.second.second;

            ans.push_back({nums1[i], nums2[j]});

            if(j+1<n2 && visited.find({i, j+1})==visited.end()){
                pq.push({nums1[i]+nums2[j+1],{i,j+1}});
                visited.insert({i,j+1});
            }


             if(i+1<n1 && visited.find({i+1, j})==visited.end()){
                pq.push({nums1[i+1]+nums2[j],{i+1,j}});
                visited.insert({i+1, j});
            }



        }
        return ans;

        
    }
};