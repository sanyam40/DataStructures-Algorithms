#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string solve(string str1, string str2, int i, int j, int carry = 0) {
        if (i < 0 && j < 0) {
            if (carry != 0) {
                return to_string(carry);
            }
            return "";
        }

        int num1 = (i >= 0) ? str1[i] - '0' : 0;
        int num2 = (j >= 0) ? str2[j] - '0' : 0;
        int csum = num1 + num2 + carry;
        int digit = csum % 10;
        carry = csum / 10;

        return solve(str1, str2, --i, --j, carry) + to_string(digit);
    }

    string addStrings(string num1, string num2) {
        string ans = solve(num1, num2, num1.size() - 1, num2.size() - 1);
        return ans;
    }
};

int main() {
    Solution solution;
    cout << solution.addStrings("11", "123") << endl;  // Output: 134
    return 0;
}
