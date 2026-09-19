class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int sum = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int rem = sum % k;
            if(rem< 0){
                rem +=k;  //make it positive number
            }
            // if(mp[rem] > 0){
            //     count += mp[rem];
            // }
            //upar wala aur neeche wala same h jb ek baar hashmap me count 1 ho gya to hmesha 1 se jyada rhega isiliye neeche wala bhi kr skte h seedha count ko badha ke
            count += mp[rem];
            mp[rem]++;

        }
        return count;
    }
};