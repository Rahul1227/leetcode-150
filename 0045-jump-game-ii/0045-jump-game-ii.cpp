class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return 0;

        int jumps = 0, curr_end = 0, curr_farthest = 0;

        for (int i = 0; i < n - 1; ++i) {
            curr_farthest = max(curr_farthest, i + nums[i]);
            if (i == curr_end) {
                jumps++;
                curr_end = curr_farthest;
                if (curr_end >= n - 1) break;
            }
        }

        return jumps;
    }
};
