class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {

        int currMax = nums[0];
        int maxSum = nums[0];

        int currMin = nums[0];
        int minSum = nums[0];

        for(int i = 1; i < nums.size(); i++) {

            int v1 = currMax + nums[i];
            int v2 = nums[i];

            currMax = max(v1, v2);
            maxSum = max(maxSum, currMax);


            int v3 = currMin + nums[i];
            int v4 = nums[i];

            currMin = min(v3, v4);
            minSum = min(minSum, currMin);
        }

        return max(maxSum, abs(minSum));
    }
};