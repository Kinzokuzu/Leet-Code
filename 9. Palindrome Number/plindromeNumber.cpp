// Problem:
// Given an integer x, return true if x is a plindrome, and false otherwise

class Solution {
public:
    bool isPalindrome(int x) {
        string x_string = to_string(x);
        string y_string = x_string;

        reverse(y_string.begin(), y_string.end());

        return x_string == y_string;
    }
};