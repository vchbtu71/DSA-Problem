class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currMax=nums[0];
        int Maxsum=nums[0];

        int currMin =nums[0];
        int Minsum=nums[0];

        int totalSum =nums[0];

        for(int i=1;i<nums.size();i++){
            //calculate kr rhe h maxsum normal 
            int v1=currMax +nums[i];
            int v2=nums[i];
            currMax = max(v1,v2);
            Maxsum = max(Maxsum,currMax);

            //calculate kr rhe h MinSum normal
            int v3= currMin+nums[i];
            int v4=nums[i];
            currMin = min(v3,v4);
            Minsum = min(Minsum,currMin);

            //total sum
            totalSum += nums[i];
        }

        // Circular maximum
        int circularSum = totalSum - Minsum;
        //if all element are neagtive 
        if(Maxsum < 0) return Maxsum;
        
        return max(Maxsum, circularSum);
    }
};