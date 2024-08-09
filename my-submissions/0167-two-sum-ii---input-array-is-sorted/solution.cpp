class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        int n = numbers.size();
        int i = 0;
        int j = n-1;

        while(i<j){
            int sum = numbers[i] + numbers[j];

            if(sum==target){
                return {i+1,j+1};
            }
            else if(sum<target){
                i++;
            }
            else {
                j--;
            }
        }
        return {-1,-1};
    }
};
