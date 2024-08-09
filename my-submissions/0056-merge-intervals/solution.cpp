class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> a;
        sort(intervals.begin(),intervals.end());
        vector<int> b = intervals[0];

        for(auto x : intervals){
            if(x[0] <= b[1]){
                b[1] = max(b[1],x[1]);
            }
            else {
                a.push_back(b);
                b = x;
            }
        }
        a.push_back(b);
        return a;
    }
};
