class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for(auto c : operations){
            if(c=="+"){
                int top = st.top();
                st.pop();
                int newscore = top + st.top();
                st.push(top);
                st.push(newscore);
            }
            else if(c=="D"){
                st.push(st.top()*2);
            }
            else if(c=="C"){
                st.pop();
            }
            else {
                st.push(stoi(c));
            }
        }
        int res = 0;
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;
    }
};
