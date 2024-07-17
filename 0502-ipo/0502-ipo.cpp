class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        typedef pair<int,int> P;
        vector<P> merge;
        int n=profits.size();
        for(int i=0; i<n; i++){
            merge.push_back({capital[i], profits[i]});
        }
        //sorting the merged array
        sort(merge.begin(), merge.end());

       // if(merge[0].first>w) return 0;

        priority_queue<int> pq;
        int i=0;
        
    
        while(k--){
            while(i<n && merge[i].first<=w){
                pq.push(merge[i].second);
                i++;
            }
            if(pq.empty()){
                break;
            }
            w+=pq.top();
            pq.pop();

        }
        return w;


        
    }
};