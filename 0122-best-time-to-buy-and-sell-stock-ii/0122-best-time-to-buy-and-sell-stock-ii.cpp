class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int profit=0;
        int i=0;
        int j=i+1;
        while(i<n-1 && j<n){
            if(arr[j]>arr[i]){
                profit+=arr[j]-arr[i];
            
            }
            i++;
            j++;
        }

        return profit;
        
        
    }
};