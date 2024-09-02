class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        stringstream ss(path);
        string s;

        while(getline(ss,s,'/')){
            if(s=="" || s == "."){
                continue;
            }
            else if(s == ".."){
                if(!st.empty()){
                    st.pop();
                }
            }
            else st.push(s); 
        }
        if(st.empty()) return "/";

        string res;

        while(!st.empty()){
            res = "/" + st.top() + res;
            st.pop();
        }
        return res;
    }
};
