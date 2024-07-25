class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=INT_MIN;
        int n=height.size();
        int i=0;
        int j=n-1;
        while(i<j){
            int area=min(height[i], height[j])*(j-i);
            maxarea=max(maxarea,area);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return maxarea;
        
    }
};