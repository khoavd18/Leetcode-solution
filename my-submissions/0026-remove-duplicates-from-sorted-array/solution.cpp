#include <vector>
#include <set>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        std::set<int> uniqueSet(nums.begin(), nums.end());
        nums.assign(uniqueSet.begin(), uniqueSet.end());

        return nums.size();
    }
};

