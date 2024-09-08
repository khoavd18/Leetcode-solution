class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> se;
        while(n!=1 && se.find(n) == se.end()){
            se.insert(n);
            n = next(n);
        }
        return n==1;
    }

    int next(int number){
        int total_sum = 0;
        while (number > 0) {
            int digit = number % 10;
            total_sum += digit * digit;
            number /= 10;
        }
        return total_sum;
    }
};
