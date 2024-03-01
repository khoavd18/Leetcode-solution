class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1;
        int j = b.length()-1;
        int c = 0;
        string res = "";
        while(i>=0 || j>=0 || c==1){
            if(i>=0) c += a[i] - '0';
            if(j>=0) c += b[j] - '0';
            res = char(c%2 + '0') + res;
            c = c / 2;
            i--;
            j--;
        }
        return res;
    }
};
