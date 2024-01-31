class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        std::vector<int>::iterator it = nums.begin();

        while (it != nums.end()) {
            if (*it == val) {
                it = nums.erase(it);
            } else {
                ++it;
            }
        }
        return nums.size();
    }
};
