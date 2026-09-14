class Solution {
public:
    int maximumSum(vector<int>& arr) {

        int noDel = arr[0];
        int oneDel = -1e9;

        int ans = arr[0];

        for(int i = 1; i < arr.size(); i++) {

            int oldNoDel = noDel;

            int v1 = arr[i];
            int v2 = noDel + arr[i];

            noDel = max(v1, v2);

            int v3 = oneDel + arr[i];
            int v4 = oldNoDel;

            oneDel = max(v3, v4);

            ans = max(ans, max(noDel, oneDel));
        }

        return ans;
    }
};