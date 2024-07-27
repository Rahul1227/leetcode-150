class Solution {
public: 
    //calculating the leftmax
    vector<int> getLeftMax(vector<int>&height, int &n){
        vector<int> leftmax(n);
        //assigning the first element of the height as the leftmax
        leftmax[0]=height[0];
        for(int i=1; i<n; i++){
            leftmax[i]=max(leftmax[i-1],height[i]);
        }
        return leftmax;
    }

    vector<int> getRightMax(vector<int> &height, int&n){
        vector<int> rightmax(n);
        //assigning the last element as the rightmax
        rightmax[n-1]=height[n-1];
        for(int i=n-2; i>=0; i--){
            rightmax[i]=max(rightmax[i+1],height[i]);
        }
        return rightmax;
    }



    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> leftmax=getLeftMax(height, n);
        vector<int> rightmax=getRightMax(height,n);

        int result=0;
        for(int i=0; i<n; i++){
            //result me leftmax and rightmax at index i -height of the building
            result+=min(leftmax[i],rightmax[i])-height[i];
        }
        return result;
        
    }
};