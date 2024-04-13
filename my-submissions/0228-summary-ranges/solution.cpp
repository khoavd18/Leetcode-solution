class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        /*if(nums.size() == 0){
            v.push_back("-1");
        }
        else { */

        
        for(int i=0;i<nums.size();i++){
            if(i+3<nums.size() && nums[i] + 1 == nums[i+1] && nums[i+1] + 1 == nums[i+2] && nums[i+2] + 1 == nums[i+3]){
                string chuoi = to_string(nums[i]) + "->" + to_string(nums[i+3]);
                v.push_back(chuoi);
                i+=3;
            }
            else if(i+2<nums.size() && nums[i] + 1 == nums[i+1] && nums[i+1] + 1 == nums[i+2]){
                string chuoi = to_string(nums[i]) + "->" + to_string(nums[i+2]);
                v.push_back(chuoi);
                i+=2;
            }
            
            else if(i+1<nums.size() && nums[i] + 1 == nums[i+1]){
                string chuoi = to_string(nums[i]) + "->" + to_string(nums[i+1]);
                v.push_back(chuoi);
                i++;
            }
            else v.push_back(to_string(nums[i]));
        }
    //}
    return v;
    }  
};
