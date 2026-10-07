class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        stack <int> st;
        vector <int> res(n);
        res[n-1]=0;
        st.push(n-1);
        for(int i =n-2 ; i>=0 ; i--){
            //pop all the elements smaller than arr[i]
            while(st.size()>0 && temp[st.top()]<= temp[i]){
                st.pop();
            }
            // marks the ans in nge array
            if(st.size()==0) res[i] = 0;
            else res[i] = st.top()-i;
            //push the arr[i]
            st.push(i);
        }
        return res;
    }
};