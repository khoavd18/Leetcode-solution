class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> v(n,0);
        stack<int> st;

        for(int i=0;i<n;i++){
            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                int preday = st.top();
                st.pop();
                v[preday] = i-preday;
            }
            st.push(i);
        }
        return v;
    }
};
